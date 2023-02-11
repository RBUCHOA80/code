#include "libft.h"

int	ft_wordlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char **ft_split(char *str)
{
	int num_words = 0;
	char **array;
	int i = 0;
	int j = 0;

	while (str[i])
	{
		if ((str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			&& (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\n' || str[i + 1] == '\0'))
		{
			num_words++;
		}
		i++;
	}

	array = malloc(sizeof(char *) * (num_words + 1));
	array[num_words] = '\0';

	i = 0;
	while (*str)
	{
		if (*str != ' ' && *str != '\t' && *str != '\n')
		{
			int len = ft_wordlen(str);
			array[j] = malloc(sizeof(char) * (len + 1));
			array[j][len] = '\0';
			while (*str != ' ' && *str != '\t' && *str != '\n' && *str != '\0')
			{
				array[j][i] = *str;
				i++;
				str++;
			}
			i = 0;
			j++;
		}
		else
		{
			str++;
		}

	}

	return array;
}
