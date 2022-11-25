// A converted value which its characters length is less than its field width
// value must be padded with spaces on the left.
int	test_00()
{
    t_convspec  *cs;
	char		*str;
    char        *expected_str;
	char		*s;
	int			res;
	int			ret;

	s = "alpha";
	expected_str = "     alpha";
	cs = calloc(1, sizeof(t_convspec));
    cs->field_width = 10;
    cs->specifier = 's';
    ret = convert_str(&str, cs, s);
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
	char		*s;
	int			res;
	int			ret;

	s = "alpha";
	expected_str = "alpha";
	cs = calloc(1, sizeof(t_convspec));
    cs->field_width = 5;
    cs->specifier = 's';
    ret = convert_str(&str, cs, s);
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
	char		*s;
	int			res;
	int			ret;

	s = "alpha";
	expected_str = "alpha";
	cs = calloc(1, sizeof(t_convspec));
    cs->field_width = 1;
    cs->specifier = 's';
    ret = convert_str(&str, cs, s);
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
	char		*s;
	int			res;
	int			ret;

	s = "alpha";
	expected_str = "alpha     ";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_minus = 1;
    cs->field_width = 10;
    cs->specifier = 's';
    ret = convert_str(&str, cs, s);
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

// A . flag expands a decimal representation with leading zeros if its length
// is less than the precision value.
int	test_04()
{
    t_convspec  *cs;
	char		*str;
    char        *expected_str;
	char		*s;
	int			res;
	int			ret;

	s = "alpha";
	expected_str = "alp";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_period = 1;
    cs->precision = 3;
    cs->specifier = 's';
    ret = convert_str(&str, cs, s);
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

// A . flag takes no effect over a decimal representation which its length
// is equal to the precision value.
int	test_05()
{
    t_convspec  *cs;
	char		*str;
    char        *expected_str;
	char		*s;
	int			res;
	int			ret;

	s = "alpha";
	expected_str = "alpha";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_period = 1;
    cs->precision = 5;
    cs->specifier = 's';
    ret = convert_str(&str, cs, s);
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

// A . specified conversion with both precision and int parameter value as
// zero writes no character.
int	test_06()
{
    t_convspec  *cs;
	char		*str;
    char        *expected_str;
	char		*s;
	int			res;
	int			ret;

	s = "alpha";
	expected_str = "";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_period = 1;
    cs->precision = 0;
    cs->specifier = 's';
    ret = convert_str(&str, cs, s);
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

int main(void)
{
	test_00();
	test_01();
	test_02();
	test_03();
	test_04();
	test_05();
	test_06();
	return (0);
}
