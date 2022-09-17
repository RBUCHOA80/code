#define _GNU_SOURCE
#include "../../libftprintf.h"
#include <dlfcn.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#ifndef BUFFER_SIZE
# define BUFFER_SIZE (8 << 15) /* 32KB */
#endif
#define ERROR(fmt, args...) fprintf(stderr, fmt, ##args)
#define FATAL_ERROR(fmt, args...) \
	ERROR(fmt, ##args); \
	exit(1);
#define LOG(fmt, args...) dprintf(stdout_backup, fmt, ##args)
// reference: https://stackoverflow.com/a/35249468
void	*(*system_malloc)(size_t) = NULL;
void	(*system_free)(void *) = NULL;
int		alloc_cnt = 0;
int		free_cnt = 0;

void	*malloc(size_t size)
{
	if (system_malloc == NULL)
		system_malloc = dlsym(RTLD_NEXT, "malloc");
	alloc_cnt++;
	return system_malloc(size);
}

void    free(void *s)
{
	if (system_free == NULL)
		system_free = dlsym(RTLD_NEXT, "free");
	free_cnt++;
	system_free(s);
}

int	main(int argc, char *argv[])
{
	char	str_got[BUFFER_SIZE + 1];
	char	str_want[BUFFER_SIZE + 1];
	int		bonus;
	int		fail_cnt;
	int		i;
	int		pipe_fds[2];
	int		res_ok;
	int		ret_got;
	int		ret_ok;
	int		ret_want;
	int		stdout_backup;
	int		tests_cnt;
	ssize_t	read_cnt;

	bonus = 0;
	i = 1;
	while (i < argc && bonus == 0)
	{
		if (strcasecmp("-bonus", argv[i]) == 0)
			bonus = 1;
		i++;
	}

	tests_cnt = 0;
	fail_cnt = 0;
#define TEST(fmt, args...) { \
	stdout_backup = dup(fileno(stdout)); /* backup the stdout fd */ \
	if (pipe(pipe_fds) == -1) { /* initialize pipe */ \
		FATAL_ERROR("failed to create pipe\n"); \
	} \
	if (dup2(pipe_fds[1], fileno(stdout)) == -1) { /* copy stdout fd to pipe write end */ \
		FATAL_ERROR("failed to copy stdout to the pipe\n"); \
	} \
	ret_want = sprintf(str_want, fmt, ##args); \
	ret_got = ft_printf(fmt, ##args); \
	fflush(stdout); /* flush out the stdout buffer */ \
	close(pipe_fds[1]); /* close the pipe write end */ \
	if (dup2(stdout_backup, fileno(stdout)) == -1) { /* restore stdout */ \
		ERROR("failed to restore the stdout\n"); \
	} \
	read_cnt = read(pipe_fds[0], str_got, BUFFER_SIZE); /* read from pipe_fds */ \
	if (read_cnt == -1) { \
		FATAL_ERROR("failed to read from pipe\n"); \
	} \
	str_got[read_cnt] = '\0'; /* null byte termination */ \
	ret_ok = ret_got == ret_want; \
	res_ok = strcmp(str_want, str_got) == 0; \
	tests_cnt++; \
	if (!ret_ok || !res_ok) { \
		fail_cnt++; \
		if (fail_cnt > 1) { \
			LOG("\n"); \
		} \
		LOG("Test #%d has failed (line %d):\n", tests_cnt, __LINE__); \
	} \
	if (!res_ok) { \
		LOG("unexpected result\n\twanted: \"%s\"\n\t   got: \"%s\"\n", str_want, str_got); \
	} \
	if (!ret_ok) { \
		LOG("unexpected return value\n\twanted: %d\n\t   got: %d\n", ret_want, ret_got); \
	} \
	close(pipe_fds[0]); /* close pipe read end */ \
}

	// simple tests:
	TEST("");
	TEST("lorem ipsum");
	TEST("\tlorem\n\tipsum\n");
	TEST("%c", 'a');
	TEST("alpha: %c\nbravo: %c\ncharlie: %c", 'a', 'b', 'c');
	TEST("%s", "\tlorem ipsum\n");
	TEST("\tlorem %s\n", "ipsum");
	TEST("%p", NULL);
	TEST("%p", (void *)1234567890);
	TEST("%p", (void *)-1);
	TEST("\talpha: %p\n\tbravo:%p\n", NULL, (void *)1234567890);
	TEST("%d", 0);
	TEST("%d", 42);
	TEST("%d", 1234567890);
	TEST("%d", -1234567890);
	TEST("%d", INT_MAX);
	TEST("%d", INT_MIN);
	TEST("\tfoo: %d\n\tbar: %d\n", 42, 1234567890);
	TEST("%i", 0);
	TEST("%i", 42);
	TEST("%i", 1234567890);
	TEST("%i", -1234567890);
	TEST("%i", INT_MAX);
	TEST("%i", INT_MIN);
	TEST("\tfoo: %i\n\tbar: %i\n", 42, 1234567890);
	TEST("%u", 0);
	TEST("%u", 42);
	TEST("%u", 57005);
	TEST("%u", UINT_MAX);
	TEST("\tfoo: %u\n\tbar: %u\n", 42, 57005);
	TEST("%x", 0);
	TEST("%x", 42);
	TEST("%x", 57005);
	TEST("%x", UINT_MAX);
	TEST("\tfoo: %x\n\tbar: %x\n", 42, 57005);
	TEST("%X", 0);
	TEST("%X", 42);
	TEST("%X", 57005);
	TEST("%X", UINT_MAX);
	TEST("\tfoo: %X\n\tbar: %X\n", 42, 57005);
	TEST("%%");
	TEST("\t100%% eru iluvatar\n\t0%% marion aulendil\n");

	// bonus tests:
	if (bonus)
	{
		// field width

		// A conversion which's field width value is greater than the converted
		// value's length must be modified with leading spaces.
		TEST("%10d", 42);
		TEST("%10d", -42);
		TEST("%10i", 42);
		TEST("%10i", -42);
		TEST("%10u", 42);
		TEST("%10x", 42);
		TEST("%10X", 42);
		TEST("%10p", NULL);
		TEST("%10p", (void *)42);
		TEST("%10c", 'a');
		TEST("%10s", "foo");
		// A conversion which's field width value is equal to the converted
		// value's length must be not modified.
		TEST("%2d", 42);
		TEST("%3d", -42);
		TEST("%2i", 42);
		TEST("%3i", -42);
		TEST("%2u", 42);
		TEST("%2x", 42);
		TEST("%2X", 42);
		TEST("%1p", NULL);
		TEST("%2p", (void *)42);
		TEST("%1c", 'a');
		TEST("%3s", "foo");
		// A conversion which's field width value is less than the converted
		// value's length must be not modified.
		TEST("%1d", 42);
		TEST("%1d", -42);
		TEST("%1i", 42);
		TEST("%1i", -42);
		TEST("%1u", 42);
		TEST("%1x", 42);
		TEST("%1X", 42);
		TEST("%1p", (void *)42);
		TEST("%1s", "foo");


		// . flag

		// A numeric conversion that specifies the . flag and which's precision
		// value is greater than the converted value's length must be modified
		// with leading zeroes.
		TEST("%.20d", 42);
		TEST("%.20d", -42);
		TEST("%.20i", 42);
		TEST("%.20i", -42);
		TEST("%.20u", 42);
		TEST("%.20x", 42);
		TEST("%.20X", 42);
		// A numeric conversion that specifies the . flag and which's precision
		// value is equal to the converted value's length must not be modified.
		TEST("%.2d", 42);
		TEST("%.2d", -42);
		TEST("%.2i", 42);
		TEST("%.2i", -42);
		TEST("%.2u", 42);
		TEST("%.2x", 42);
		TEST("%.2X", 42);
		// A numeric conversion that specifies the . flag and which's precision
		// value is less than the converted value's length must not be modified.
		TEST("%.1d", 42);
		TEST("%.1d", -42);
		TEST("%.1i", 42);
		TEST("%.1i", -42);
		TEST("%.1u", 42);
		TEST("%.1x", 42);
		TEST("%.1X", 42);
		// A numeric conversion that specifies the . flag and which both
		// precision and converted values are zero writes nothing.
		TEST("%.0d", 0);
		TEST("%.0i", 0);
		TEST("%.0u", 0);
		TEST("%.0x", 0);
		TEST("%.0X", 0);
		// A string conversion that specifies the . flag limits the number of
		// written characters to its precision value.
		TEST("%.5s", "lorem ipsum");
		// A string conversion that specifies the . flag and which's precision
		// value is zero writes no character.
		TEST("%.0s", "lorem ipsum");
		// A string conversion that specifies the . flag and which's precision
		// value is greater than the string length must not be modified. 
		TEST("%.20s", "lorem ipsum");
		// A string conversion that specifiest the . flag and which's precision
		// value is equal to the string length must not be modified.
		TEST("%.11s", "lorem ipsum");
		// A conversion that specifies the . flag but don't explicitly specifies
		// a precision has a precision value of zero.
		TEST("%.d", 0);
		TEST("%.i", 0);
		TEST("%.u", 0);
		TEST("%.x", 0);
		TEST("%.X", 0);
		TEST("%.s", "lorem ipsum");


		// - flag

		// A conversion that specifies a - flag and which's field width value is
		// greater than the converted value's length must be modified with
		// trailing spaces.
		TEST("%-10d", 42);
		TEST("%-10d", -42);
		TEST("%-10i", 42);
		TEST("%-10i", -42);
		TEST("%-10u", 42);
		TEST("%-10x", 42);
		TEST("%-10X", 42);
		TEST("%-10p", NULL);
		TEST("%-10p", (void *)42);
		TEST("%-10c", 'a');
		TEST("%-10s", "foo");
		// A conversion that specifies a - flag but which's field width value is
		// equal to the converted value's length must be not modified.
		TEST("%-2d", 42);
		TEST("%-3d", -42);
		TEST("%-2i", 42);
		TEST("%-3i", -42);
		TEST("%-2u", 42);
		TEST("%-2x", 42);
		TEST("%-2X", 42);
		TEST("%-1p", NULL);
		TEST("%-2p", (void *)42);
		TEST("%-1c", 'a');
		TEST("%-3s", "foo");
		// A conversion that specifies a - flag but which's field width value is
		// less than the converted value's length must be not modified.
		TEST("%-1d", 42);
		TEST("%-1d", -42);
		TEST("%-1i", 42);
		TEST("%-1i", -42);
		TEST("%-1u", 42);
		TEST("%-1x", 42);
		TEST("%-1X", 42);
		TEST("%-1p", (void *)42);
		TEST("%-1s", "foo");


		// 0 flag

		// A conversion that specifies a 0 flag and which's field width value is
		// greater than the converted value's length must be modified with
		// leading zeroes.
		TEST("%010d", 42);
		TEST("%010d", -42);
		TEST("%010i", 42);
		TEST("%010i", -42);
		TEST("%010u", 42);
		TEST("%010x", 42);
		TEST("%010X", 42);
		// A conversion that specifies a 0 flag but which's field width value is
		// equal to the converted value's length must be not modified.
		TEST("%02d", 42);
		TEST("%03d", -42);
		TEST("%02i", 42);
		TEST("%03i", -42);
		TEST("%02u", 42);
		TEST("%02x", 42);
		TEST("%02X", 42);
		// A conversion that specifies a 0 flag but which's field width value is
		// less than the converted value's length must be not modified.
		TEST("%01d", 42);
		TEST("%01d", -42);
		TEST("%01i", 42);
		TEST("%01i", -42);
		TEST("%01u", 42);
		TEST("%01x", 42);
		TEST("%01X", 42);
		// The 0 flag takes no effect over a conversion that also specifies a
		// - flag.
		TEST("%-010d", 42);
		TEST("%-010d", -42);
		TEST("%-010i", -42);
		TEST("%-010i", 42);
		// The 0 flag takes no effect over a conversion that also specifies a
		// . flag.
		TEST("%010.d", 42);
		TEST("%010.d", -42);
		TEST("%010.i", 42);
		TEST("%010.i", -42);
		TEST("%010.u", 42);
		TEST("%010.x", 42);
		TEST("%010.X", 42);


		// + flag

		// The + flag must add a leading plus sign in a conversion of a
		// positive integer.
		TEST("%+d", 42);
		TEST("%+i", 42);
		// The + flag takes no effect over a conversion of a negative
		// integer.
		TEST("%+d", -42);
		TEST("%+i", -42);
		// The + flag must add a leading plus sign in a conversion of a
		// integer with zero value.
		TEST("%+d", 0);
		TEST("%+i", 0);


		// space flag

		// The space flag must add a leading space in a conversion of a positive
		// integer.
		TEST("% d", 42);
		TEST("% i", 42);
		// The space flag takes no effect over a conversion of a negative
		// integer.
		TEST("% d", -42);
		TEST("% i", -42);
		// The space flag must add a leading space in a conversion of a integer
		// with zero value.
		TEST("% d", 0);
		TEST("% i", 0);
		// The space flag must add a space in a integer conversion resulted
		// in no digits.
		TEST("% .d", 0);
		TEST("% .i", 0);
		// The space flag takes no effect over a conversion that also specifies
		// a + flag.
		TEST("% +d", 42);
		TEST("% +i", 42);


		// # flag

		// The # flag must add a leading "0x" in a 'x' conversion.
		TEST("%#x", 42);
		// The # flag must add a leading "0X" in a 'X' conversion.
		TEST("%#X", 42);
		// The # flag must take no effect over hex conversions that write no
		// digits.
		TEST("%#.x", 0);
		TEST("%#.X", 0);


		// flags combinations
		TEST("% -40.20d", 42);
		TEST("% 040.20d", 42);
		TEST("%+040.20d", 42);
		TEST("% -40.20i", 42);
		TEST("% 040.20i", 42);
		TEST("%+040.20i", 42);
		TEST("%40.20u", 42);
		TEST("%-40.20u", 42);
		TEST("%040.20u", 42);
		TEST("%40.20x", 42);
		TEST("%-40.20x", 42);
		TEST("%040.20x", 42);
		TEST("%40.20X", 42);
		TEST("%-40.20X", 42);
		TEST("%040.20X", 42);

		// conversions combinations
		TEST("% -40.20d% 040.20d%+040.20d% -40.20i% 040.20i%+040.20i%40.20u%-40.20u%040.20u%40.20x%-40.20x%040.20x%40.20X%-40.20X%040.20X%-20.5s%20c",
			42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, "lorem ipsum dolor sit amet", 'a');
		TEST("alpha\n\t% -40.20dbravo\n\t% 040.20dcharlie\n\t%+040.20ddelta\n\t% -40.20iecho\n\t% 040.20ifoxtrot\n\t%+040.20igolf\n\t%40.20uhotel\n\t%-40.20uindia\n\t%040.20ujuliet\n\t%40.20xkilo\n\t%-40.20xlima\n\t%040.20xmike\n\t%40.20Xnovember\n\t%-40.20Xoscar\n\t%040.20Xpapa\n\t%-20.5squebec\n\t%20c\n\troger",
			42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, "lorem ipsum dolor sit amet", 'a');
	}

	if (alloc_cnt != free_cnt)
	{
		if (fail_cnt > 0)
			printf("\n\n");
		printf("Memory leak:\nmalloc calls: %d\nfree calls  : %d\n", alloc_cnt, free_cnt);
	}

	LOG("%d/%d tests have succeeded\n", tests_cnt - fail_cnt, tests_cnt);

	return (fail_cnt == 0 ? 0 : 1);
}
