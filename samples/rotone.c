int 	rotone_main(int argc, char **argv)
{
	int count;
	//char str;
	int n;

	count = 0;
	//str = **argv
	
	while (argv[0][count] != '\0')
		count++
	if (argc != 1 || count != 1)
		return (1);
	
	while (str)
		if (('a' < str && str < 'z') || ('A' < str && str < 'Z'))
			{

			}
			
	

}

int    main(void)
{
  char *arg0[] = {"abc"};
  rotone_main(1, arg0);
  char *arg1[] = {"Les stagiaires du staff ne sentent pas toujours tres bon."};
  rotone_main(1, arg1);
  char *arg2[] = {"AkjhZ zLKIJz , 23y "};
  rotone_main(1, arg2);
  char *arg3[] = {"a", "b"};
  rotone_main(2, arg3);
  return (0);
}