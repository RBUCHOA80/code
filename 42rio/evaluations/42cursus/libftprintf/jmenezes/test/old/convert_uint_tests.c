#include "conversion.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	convert_uint(char **str, t_convspec *cs, unsigned int n);

// A converted value which its characters length is less than its field width
// value must be padded with spaces on the left.
int	test_00()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "        2a";
	cs = calloc(1, sizeof(t_convspec));
    cs->field_width = 10;
    cs->specifier = 'x';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_00: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

int	test_01()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "        2A";
	cs = calloc(1, sizeof(t_convspec));
    cs->field_width = 10;
    cs->specifier = 'X';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_01: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

int	test_02()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "        42";
	cs = calloc(1, sizeof(t_convspec));
    cs->field_width = 10;
    cs->specifier = 'u';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_02: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

// A converted value which its characters length is equal to its field width
// value must not be modified.
int	test_03()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "2a";
	cs = calloc(1, sizeof(t_convspec));
    cs->field_width = 2;
    cs->specifier = 'x';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_03: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

int	test_04()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "2A";
	cs = calloc(1, sizeof(t_convspec));
    cs->field_width = 2;
    cs->specifier = 'X';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_04: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

int	test_05()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "42";
	cs = calloc(1, sizeof(t_convspec));
    cs->field_width = 2;
    cs->specifier = 'u';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_05: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

// A converted value which its characters length is less than its field width
// value must no be modified.
int	test_06()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "2a";
	cs = calloc(1, sizeof(t_convspec));
    cs->field_width = 1;
    cs->specifier = 'x';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_06: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

int	test_07()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "2A";
	cs = calloc(1, sizeof(t_convspec));
    cs->field_width = 1;
    cs->specifier = 'X';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_07: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

int	test_08()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "42";
	cs = calloc(1, sizeof(t_convspec));
    cs->field_width = 1;
    cs->specifier = 'u';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_08: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

// The - flag must suffix the spaces into a signed conversion which its field
// width is greater than the decimal representation of the parameter.
int	test_09()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "2a        ";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_minus = 1;
    cs->field_width = 10;
    cs->specifier = 'x';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_09: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

int	test_10()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "2A        ";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_minus = 1;
    cs->field_width = 10;
    cs->specifier = 'X';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_10: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

int	test_11()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "42        ";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_minus = 1;
    cs->field_width = 10;
    cs->specifier = 'u';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_11: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

// The 0 flag must prefix zeros into a signed conversion which its field width
// is greater than the decimal representation of the parameter.
int	test_12()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "000000002a";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_zero = 1;
    cs->field_width = 10;
    cs->specifier = 'x';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_12: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

int	test_13()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "0x0000002a";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_hash = 1;
    cs->flag_zero = 1;
    cs->field_width = 10;
    cs->specifier = 'x';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_13: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

int	test_14()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "000000002A";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_zero = 1;
    cs->field_width = 10;
    cs->specifier = 'X';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_14: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

int	test_15()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "0X0000002A";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_hash = 1;
    cs->flag_zero = 1;
    cs->field_width = 10;
    cs->specifier = 'X';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_15: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

int	test_16()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "0000000042";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_zero = 1;
    cs->field_width = 10;
    cs->specifier = 'u';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_16: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

// The zero flag must not modify a signed conversion that also specifies
// the - flag.
int	test_17()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "2a        ";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_minus = 1;
    cs->flag_zero = 1;
    cs->field_width = 10;
    cs->specifier = 'x';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_17: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

int	test_18()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "2A        ";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_minus = 1;
    cs->flag_zero = 1;
    cs->field_width = 10;
    cs->specifier = 'X';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_18: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

int	test_19()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "42        ";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_minus = 1;
    cs->flag_zero = 1;
    cs->field_width = 10;
    cs->specifier = 'u';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_19: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

// The zero flag must not modify a signed conversion that also specifies
// the . flag.
int	test_20()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "        2a";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_zero = 1;
    cs->flag_period = 1;
    cs->field_width = 10;
    cs->specifier = 'x';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_20: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

int	test_21()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "        2A";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_zero = 1;
    cs->flag_period = 1;
    cs->field_width = 10;
    cs->specifier = 'X';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_21: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

int	test_22()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "        42";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_zero = 1;
    cs->flag_period = 1;
    cs->field_width = 10;
    cs->specifier = 'u';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_22: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

// A . flag expands a decimal representation with leading zeros if its length
// is less than the precision value.
int	test_23()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "000000002a";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_period = 1;
    cs->precision = 10;
    cs->specifier = 'x';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_23: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

int	test_24()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "0x000000002a";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_hash = 1;
    cs->flag_period = 1;
    cs->precision = 10;
    cs->specifier = 'x';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_24: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

int	test_25()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "000000002A";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_period = 1;
    cs->precision = 10;
    cs->specifier = 'X';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_25: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

int	test_26()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "0X000000002A";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_hash = 1;
    cs->flag_period = 1;
    cs->precision = 10;
    cs->specifier = 'X';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_26: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

int	test_27()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "0000000042";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_period = 1;
    cs->precision = 10;
    cs->specifier = 'u';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_27: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

// A . flag takes no effect over a decimal representation which its length
// is equal to the precision value.
int	test_28()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "2a";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_period = 1;
    cs->precision = 2;
    cs->specifier = 'x';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_28: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

int	test_29()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "2A";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_period = 1;
    cs->precision = 2;
    cs->specifier = 'X';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_29: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

int	test_30()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "42";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_period = 1;
    cs->precision = 2;
    cs->specifier = 'u';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_30: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

// A . flag takes no effect over a decimal representation which its length
// is greater than the precision value.
int	test_31()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "2a";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_period = 1;
    cs->precision = 1;
    cs->specifier = 'x';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_31: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

int	test_32()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "2A";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_period = 1;
    cs->precision = 1;
    cs->specifier = 'X';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_32: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

int	test_33()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "42";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_period = 1;
    cs->precision = 1;
    cs->specifier = 'u';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_33: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

// A . specified conversion with both precision and int parameter value as
// zero writes no character.
int	test_34()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 0;
	expected_str = "";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_period = 1;
    cs->precision = 0;
    cs->specifier = 'x';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_34: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

int	test_35()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 0;
	expected_str = "";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_period = 1;
    cs->precision = 0;
    cs->specifier = 'X';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_35: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

int	test_36()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 0;
	expected_str = "";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_period = 1;
    cs->precision = 0;
    cs->specifier = 'u';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_36: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

// A # flag must prefix a 0x into an unsigned conversion with specifier 'x'
int	test_37()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "0x2a";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_hash = 1;
    cs->specifier = 'x';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_37: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

// A # flag must prefix a 0X into an unsigned conversion with specifier 'X'
int	test_38()
{
    t_convspec  	*cs;
	char			*str;
    char        	*expected_str;
	unsigned int	d;
	int				res;
	int				ret;

	d = 42;
	expected_str = "0X2A";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_hash = 1;
    cs->specifier = 'X';
    ret = convert_uint(&str, cs, d);
	res = strcmp(str, expected_str) == 0 && (size_t)ret == strlen(expected_str);
	printf("test_38: ");
	if (res)
		printf("OK!\n");
	else
		printf("KO!\n");
	free(cs);
    free(str);
	return (res);
}

int main(void)
{
	test_00();
	test_01();
	test_02();
	test_03();
	test_04();
	test_05();
	test_06();
	test_07();
	test_08();
	test_09();
	test_10();
	test_11();
	test_12();
	test_13();
	test_14();
	test_15();
	test_16();
	test_17();
	test_18();
	test_19();
	test_20();
	test_21();
	test_22();
	test_23();
	test_24();
	test_25();
	test_26();
	test_27();
	test_28();
	test_29();
	test_30();
	test_31();
	test_32();
	test_33();
	test_34();
	test_35();
	test_36();
	test_37();
	test_38();
	return (0);
}
