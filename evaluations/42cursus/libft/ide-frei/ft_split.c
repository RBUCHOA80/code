/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 18:07:16 by ide-frei          #+#    #+#             */
/*   Updated: 2022/06/04 19:12:55 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *str, char c)
{
	int	nword;

	nword = 0;
	while (*str)
	{
		if (*str != c)
		{
			nword++;
			while (*str != c && *str)
				str++;
		}
		else
			str++;
	}
	return (nword);
}

static int	get_words(char **pptr, char *str, char c)
{
	int	i;
	int	len;

	i = 0;
	while (*str)
	{
		if (*str != c)
		{
			len = 0;
			while (*str != c && *str)
			{
				str++;
				len++;
			}
			pptr[i++] = ft_substr(str - len, 0, len);
			if (!pptr[i - 1])
				return (0);
		}
		else
			str++;
	}
	return (1);
}

static void	ft_free(char **pptr, size_t size)
{
	while (size > 0)
	{
		free(pptr[size - 1]);
		size--;
	}
	pptr = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		nwords;

	if (s == NULL)
		return (NULL);
	nwords = count_words((char *)s, c);
	ret = malloc((nwords + 1) * sizeof(*ret));
	if (!ret)
		return (ret);
	ret[nwords] = NULL;
	if (!get_words(ret, (char *)s, c))
		ft_free(ret, nwords + 1);
	return (ret);
}

/* #include <stdio.h>
int main(void)
{
    char *test = "./a.out var1 var2 var3";
    char sep = ' ';
    char **ret;

    ret = ft_split(test, sep);
    while(*ret)
    {
        printf("%s\n", *ret++);
    }
} */
