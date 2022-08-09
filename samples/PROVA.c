//Level 0:

#include <unistd.h>

void aff_p(char *str)
{
	write(1, "p\n", 2);
}

//Level 1:
int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;

	return (i);
}

//Level 2:
#include <unistd.h>

void ft_putchar(char str)
{
	write(1, &str, 1);
}

int rotone_main(int argc, char **argv)
{
	char temp_var;
	int len;
	int i;

	len = 0;
	i = 0;
	if(argc != 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[0][len] != '\0')
		len++;

	while(argv[0][i] != '\0')
	{
		if  ((argv[0][i] >= 'a' && argv[0][i] <= 'z') || (argv[0][i] >= 'A' && argv[0][i] <= 'Z'))
		{
			if (argv[0][i] == 'z')
				temp_var = 'a';
			else if (argv[0][i] == 'Z')
				temp_var = 'A';
			else if(argv[0][i] != ' ')
				temp_var = (argv[0][i] + 1);
			else
				temp_var = ' ';
		}
		else
			temp_var = argv[0][i];

		ft_putchar(temp_var);
		i++;
	}
		ft_putchar('\n');

	return (0);
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

//Level 3:
#include <unistd.h>
#include <stdio.h>

void ft_putchar(char str)
{
	write(1, &str, 1);
}

int ft_clean(char *str, char c, int i)
{
	int j;

	j = 0;
	while (j < i)
	{
		if (str[j] == c)
			return (0);
		j++;
	}
	return (1);
}

int inter_main(int argc, char **argv)
{
	int f; // find
	int s; // search

	if(argc != 2)
	{
		ft_putchar('\n');
		return (1);
	}

	f = 0;
	while (argv[0][f] != '\0')
	{
		if(ft_clean(argv[0], argv[0][f], f) == 1)
		{
			s = 0;
			while(argv[1][s] != '\0')
			{
				if (argv[1][s] == argv[0][f])
				{
					ft_putchar(argv[0][f]);
					break;
				}
				s++;
			}
		}
		f++;
	}
	ft_putchar('\n');
	return (0);
}
int    main(void)
{
  char *arg0[] = {"padinton","paqefwtdjetyiytjneytjoeyjnejeyj"};
  inter_main(2, arg0);
  char *arg1[] = {"ddf6vewg64f", "gtwthgdwthdwfteewhrtag6h4ffdhsd"};
  inter_main(2, arg1);
  char *arg2[] = {"rien", "cette phrase ne cache rien"};
  inter_main(2, arg2);
  char *arg3[] = {};
  inter_main(0, arg3);
  return (0);
}

//Level 4:
int ft_is_space(char c)
{
	if(c == ' ' || c == '\v' || c == '\f' || c == '\n' || c == '\t' || c == '\r')
		return (1);
	return (0);
}

int ft_is_nb(char c)
{
	if (c <= '9' && c >= '0')
		return (1);
	return (0);
}

int ft_atoi(const char *str)
{
	int i;
	int nbr;
	int m;

	nbr = 0;
	m = 1;
	i = 0;
	while (ft_is_space(str[i]) )
		i++;

	if(str[i] == '-')
		m *= -1;
	if (str[i] == '+' || str[i] == '-')
		i++;

	while (ft_is_nb(str[i]))
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	nbr = nbr * m;
	return (nbr);
}
#include <stdio.h>

int main(void)
{
	char teste[] = "-1234dssd567";
	printf("%i", ft_atoi(teste));
}

//Level 5:
#include <stdlib.h>

int *ft_range(int start, int end)
{
	int *a;
	int c;

	if(start > end)
		a = (int *)malloc(sizeof(int) * (start - end + 1));
	else
		a = (int *)malloc(sizeof(int) * (end - start + 1));

	c = 0;
	while (start != end)
	{
		a[c] = start;
		if (start > end)
			start -= 1;
		else
			start += 1;
		c++;
	}
	a[c] = start;
	/*i = start;
	if(end < 0)
	{
		while (i >= (end - start))
		{
			a[c] = i;
			i--;
			c++;
		}
	}
	else
	{
		while (i <= end)
		{
			a[c] = i;
			i++;
			c++;
		}
	}*/
	return (a);
}
#include <stdio.h>

int main(void)
{
	int *a;
	int i;

	i = 0;
	a = ft_range(-1, 2);
	while(i <= 3)
	{
		printf("\n%d", a[i]);
		i++;
	}

	return (0);
}

//Level 6: FAIL FAIL FAIL
#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;

	return (i);
}

int ft_has_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int ft_len(char *str)
{
	int i;
	int l;

	i = 0;
	l = 0;
	while(str[i])
	{
		while(str[i] && ft_has_space(str[i]))
			i++;

		if (str[i] && !ft_has_space(str[i]))
		{
			l++;
			while(str[i] && !ft_has_space(str[i]))
				i++;
		}
	}
	return (l);
}

char **ft_split(char *str)
{
	char **ret;
	ret = (char **)malloc(sizeof(char*) * ft_len(str) + 1);
	int i;
	int j;
	int e;
	int last_word;

	last_word = 0;
	i = 0;
	j = 0;
	e = 0;
	while (i <= ft_strlen(str))
	{
		if(ft_has_space(str[i]))
		{
			if(last_word == 1)
				e++;
			last_word = 0;
			j = 0;
		} else {
			ret[e] = (char *)malloc(sizeof(char) * (i + 1));
			ret[e][j] = str[i];
			j++;
			last_word = 1;
		}
		i++;
	}
	return (ret);
}
int main(void)
{
	char **ret;
	char str[] = "  setting  teste\t asdasdasda";
	ret = ft_split(str);
	//printf("%s \n %s", str, ret[1]);
}
