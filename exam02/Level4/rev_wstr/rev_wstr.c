/*
Assignment name  : rev_wstr
Expected files   : rev_wstr.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string as a parameter, and prints its words in
reverse order.

A "word" is a part of the string bounded by spaces and/or tabs, or the
begin/end of the string.

If the number of parameters is different from 1, the program will display
'\n'.

In the parameters that are going to be tested, there won't be any "additional"
spaces (meaning that there won't be additionnal spaces at the beginning or at
the end of the string, and words will always be separated by exactly one space).

Examples:

$> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
ironic? it Isn't gatherings. love I But people! hate You$
$>./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "Wingardium Leviosa" | cat -e
Leviosa Wingardium$
$> ./rev_wstr | cat -e
$
$>
*/

#include <unistd.h> //write
#include <stdlib.h> //malloc|free
#include <stdio.h> //printf

/* int	main(int argc, char **argv)
{
	char	*temp;
	int		size;
	int		i;
	int		j;
	
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		i = 0;
		while (argv[1][i])
			i++;
		size = i - 1;
		while (i > 0)
		{
			while (size >= 0 && argv[1][size] != 9 && argv[1][size] != 32)
			{
				size--;
			}
				printf("size = %d\n", size);
			temp = (char *)malloc((sizeof(*temp) * (i - size)) + 1);
			if (!temp)
				return(1);
			temp[i - size + 1] = '\0';
			while ((i - size))
			{
				temp[(i - size)] = argv[1][i];
				i--;
			}
			j = 0;
			while (temp[j])
				write(1, &temp[j++], 1);
			free(temp);
		}
	}
	return (0);
} */

int	main(int argc, char **argv)
{
	char	*temp;
	int		start;
	int		i;
	int		j;
	
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		i = 0;
		while (argv[1][i])
			i++;
		i = i - 1;
		while (i > 0)
		{
			while (argv[1][i] != '\t' && argv[1][i] != ' ' && i >= 0)
				i--;
			while (argv[1][i] == '\t' && argv[1][i] == ' ')
				i--;
			start = i;
			start++;
			while (argv[1][start] != '\t' && argv[1][start] != ' ' && argv[1][start])
			{
				write(1, &argv[1][start], 1);
				start++;
			}
			while (argv[1][i] == '\t' && argv[1][i] == ' ')
				i--;
			if (argv[1][i + 1] && i > 0)
				write(1, " ", 1);
			i--;
		}
		write(1, "\n", 1);
	}
	return (0);
}
