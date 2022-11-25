#include "conversion.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	convert_int(char **str, t_convspec *cs, int d);

// A converted value which its characters length is less than its field width
// value must be padded with spaces on the left.
int	test_00()
{
    t_convspec  *cs;
	char		*str;
    char        *expected_str;
	int			d;
	int			res;
	int			ret;

	d = 42;
	expected_str = "        42";
	cs = calloc(1, sizeof(t_convspec));
    cs->field_width = 10;
    cs->specifier = 'd';
    ret = convert_int(&str, cs, d);
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

// A converted value which its characters length is equal to its field width
// value must not be modified.
int	test_01()
{
    t_convspec  *cs;
	char		*str;
    char        *expected_str;
	int			d;
	int			res;
	int			ret;

	d = 42;
	expected_str = "42";
	cs = calloc(1, sizeof(t_convspec));
    cs->field_width = 2;
    cs->specifier = 'd';
    ret = convert_int(&str, cs, d);
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

// A converted value which its characters length is less than its field width
// value must no be modified.
int	test_02()
{
    t_convspec  *cs;
	char		*str;
    char        *expected_str;
	int			d;
	int			res;
	int			ret;

	d = 42;
	expected_str = "42";
	cs = calloc(1, sizeof(t_convspec));
    cs->field_width = 1;
    cs->specifier = 'd';
    ret = convert_int(&str, cs, d);
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

// The - flag must suffix the spaces into a signed conversion which its field
// width is greater than the decimal representation of the parameter.
int	test_03()
{
    t_convspec  *cs;
	char		*str;
    char        *expected_str;
	int			d;
	int			res;
	int			ret;

	d = 42;
	expected_str = "42        ";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_minus = 1;
    cs->field_width = 10;
    cs->specifier = 'd';
    ret = convert_int(&str, cs, d);
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

// The 0 flag must prefix zeros into a signed conversion which its field width
// is greater than the decimal representation of the parameter.
int	test_04()
{
    t_convspec  *cs;
	char		*str;
    char        *expected_str;
	int			d;
	int			res;
	int			ret;

	d = -42;
	expected_str = "-000000042";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_zero = 1;
    cs->field_width = 10;
    cs->specifier = 'd';
    ret = convert_int(&str, cs, d);
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

// The zero flag must not modify a signed conversion that also specifies
// the - flag.
int	test_05()
{
    t_convspec  *cs;
	char		*str;
    char        *expected_str;
	int			d;
	int			res;
	int			ret;

	d = -42;
	expected_str = "-42       ";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_minus = 1;
    cs->flag_zero = 1;
    cs->field_width = 10;
    cs->specifier = 'd';
    ret = convert_int(&str, cs, d);
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

// The zero flag must not modify a signed conversion that also specifies
// the . flag.
int	test_06()
{
    t_convspec  *cs;
	char		*str;
    char        *expected_str;
	int			d;
	int			res;
	int			ret;

	d = -42;
	expected_str = "       -42";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_zero = 1;
    cs->flag_period = 1;
    cs->field_width = 10;
    cs->specifier = 'd';
    ret = convert_int(&str, cs, d);
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

// The space flag must prefix a space into a signed conversion of a parameter
// with positive value.
int	test_07()
{
    t_convspec  *cs;
	char		*str;
    char        *expected_str;
	int			d;
	int			res;
	int			ret;

	d = 42;
	expected_str = " 42";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_space = 1;
    cs->specifier = 'd';
    ret = convert_int(&str, cs, d);
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

// The space flag must prefix a space into a signed conversion of a parameter
// with zero value.
int	test_08()
{
    t_convspec  *cs;
	char		*str;
    char        *expected_str;
	int			d;
	int			res;
	int			ret;

	d = 0;
	expected_str = " 0";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_space = 1;
    cs->specifier = 'd';
    ret = convert_int(&str, cs, d);
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

// The space flag must prefix a space into a signed conversion resulted in
// no characters.
int	test_09()
{
    t_convspec  *cs;
	char		*str;
    char        *expected_str;
	int			d;
	int			res;
	int			ret;

	d = 0;
	expected_str = " ";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_space = 1;
    cs->flag_period = 1;
    cs->specifier = 'd';
    ret = convert_int(&str, cs, d);
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

// The space flag must not modify a signed conversion of a parameter with
// negative value.
int	test_10()
{
    t_convspec  *cs;
	char		*str;
    char        *expected_str;
	int			d;
	int			res;
	int			ret;

	d = -42;
	expected_str = "-42";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_space = 1;
    cs->specifier = 'd';
    ret = convert_int(&str, cs, d);
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

// The space flag must not modify a signed conversion that also specifies
// the + flag.
int	test_11()
{
    t_convspec  *cs;
	char		*str;
    char        *expected_str;
	int			d;
	int			res;
	int			ret;

	d = 42;
	expected_str = "+42";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_space = 1;
    cs->flag_plus = 1;
    cs->specifier = 'd';
    ret = convert_int(&str, cs, d);
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

// The + flag must prefix a plus sign into a signed conversion of a parameter
// with positive value.
int	test_12()
{
    t_convspec  *cs;
	char		*str;
    char        *expected_str;
	int			d;
	int			res;
	int			ret;

	d = 42;
	expected_str = "+42";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_plus = 1;
    cs->specifier = 'd';
    ret = convert_int(&str, cs, d);
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

// The + flag must prefix a plus sign into a signed conversion of a parameter
// with zero value.
int	test_13()
{
    t_convspec  *cs;
	char		*str;
    char        *expected_str;
	int			d;
	int			res;
	int			ret;

	d = 0;
	expected_str = "+0";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_plus = 1;
    cs->specifier = 'd';
    ret = convert_int(&str, cs, d);
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

// The + flag must not modify a signed conversion of a parameter with
// negative value.
int	test_14()
{
    t_convspec  *cs;
	char		*str;
    char        *expected_str;
	int			d;
	int			res;
	int			ret;

	d = -42;
	expected_str = "-42";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_plus = 1;
    cs->specifier = 'd';
    ret = convert_int(&str, cs, d);
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

// A . flag expands a decimal representation with leading zeros if its length
// is less than the precision value.
int	test_15()
{
    t_convspec  *cs;
	char		*str;
    char        *expected_str;
	int			d;
	int			res;
	int			ret;

	d = -42;
	expected_str = "-0000000042";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_period = 1;
    cs->precision = 10;
    cs->specifier = 'd';
    ret = convert_int(&str, cs, d);
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

// A . flag takes no effect over a decimal representation which its length
// is equal to the precision value.
int	test_16()
{
    t_convspec  *cs;
	char		*str;
    char        *expected_str;
	int			d;
	int			res;
	int			ret;

	d = -42;
	expected_str = "-42";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_period = 1;
    cs->precision = 2;
    cs->specifier = 'd';
    ret = convert_int(&str, cs, d);
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

// A . flag takes no effect over a decimal representation which its length
// is greater than the precision value.
int	test_17()
{
    t_convspec  *cs;
	char		*str;
    char        *expected_str;
	int			d;
	int			res;
	int			ret;

	d = -42;
	expected_str = "-42";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_period = 1;
    cs->precision = 1;
    cs->specifier = 'd';
    ret = convert_int(&str, cs, d);
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

// A . specified conversion with both precision and int parameter value as
// zero writes no character.
int	test_18()
{
    t_convspec  *cs;
	char		*str;
    char        *expected_str;
	int			d;
	int			res;
	int			ret;

	d = 0;
	expected_str = "";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_period = 1;
    cs->precision = 0;
    cs->specifier = 'd';
    ret = convert_int(&str, cs, d);
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
    return (0);
}
