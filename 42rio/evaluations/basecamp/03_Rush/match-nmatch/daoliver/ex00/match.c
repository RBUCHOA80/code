/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daolivei <daolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 23:20:15 by daolivei          #+#    #+#             */
/*   Updated: 2022/04/10 23:20:19 by daolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*wildcard_match(char *s1, char *s2);
char	*strstr_wild(char *str, char *to_find);

int	match(char *s1, char *s2)
{
	while (*s2)
	{
		if (*s1 != *s2 && *s2 != '*')
			return (0);
		if (*s2 == '*')
			s1 = wildcard_match(s1, s2);
		if (*s1 == *s2 && *s2 != '*')
			s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (1);
	return (0);
}

char	*wildcard_match(char *s1, char *s2)
{
	if (*(s2 + 1) == '*')
		return (s1);
	if (*(s2 + 1) == '\0')
	{
		while (*s1)
			s1++;
		return (s1);
	}
	return (strstr_wild(s1, s2));
}

char	*strstr_wild(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j + 1] == str[i + j])
		{
			if (to_find[j + 2] == '*')
				return (&str[i]);
			if (to_find[j + 2] == '\0' && str[(i + j) + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (str);
}

#include <stdio.h>

char	g_s1[] = "Put your sample text here";
char	g_s2[13][50]
	= {
	"Put",		//Fail
	"Put*",		//MATCH
	"Put**",	//MATCH
	"Put here your sample text",	//Fail
	"Put***** your sa**mple te***xt here",	//MATCH
	"Put your sample text here123",	//Fail
	"P*tyor*",		//Fail
	"P*t your*",	//MATCH
	"Put*s",		//Fail
	"P**ut*s*",		//MATCH
	"*here",		//MATCH
	"*sample*",		//MATCH
	"**P*t*s*",		//MATCH
};

int	main(void)
{
	int	index;

	index = -1;
	while (*g_s2[++index])
	{
		if (match(g_s1, g_s2[index]))
			printf("%i.'%s' \e[1;32mMATCH!\e[0m\n", index + 1, g_s2[index]);
		else
			printf("%i.'%s' \e[1;31mFail!\e[0m\n", index + 1, g_s2[index]);
	}
	return (0);
}
