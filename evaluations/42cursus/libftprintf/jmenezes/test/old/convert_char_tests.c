// A converted value which its characters length is less than its field width
// value must be padded with spaces on the left.
int	test_00()
{
    t_convspec  *cs;
	char		*str;
    char        *expected_str;
	char		c;
	int			res;
	int			ret;

	c = 'a';
	expected_str = "         a";
	cs = calloc(1, sizeof(t_convspec));
    cs->field_width = 10;
    cs->specifier = 'c';
    ret = convert_char(&str, cs, c);
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
	char		c;
	int			res;
	int			ret;

	c = 'a';
	expected_str = "a";
	cs = calloc(1, sizeof(t_convspec));
    cs->field_width = 1;
    cs->specifier = 'c';
    ret = convert_char(&str, cs, c);
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
	char		c;
	int			res;
	int			ret;

	c = 'a';
	expected_str = "a";
	cs = calloc(1, sizeof(t_convspec));
    cs->field_width = 0;
    cs->specifier = 'c';
    ret = convert_char(&str, cs, c);
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
	char		c;
	int			res;
	int			ret;

	c = 'a';
	expected_str = "a         ";
	cs = calloc(1, sizeof(t_convspec));
    cs->flag_minus = 1;
    cs->field_width = 10;
    cs->specifier = 'c';
    ret = convert_char(&str, cs, c);
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

int main(void)
{
	test_00();
	test_01();
	test_02();
	test_03();
	return (0);
}
