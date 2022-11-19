/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fribeiro <fribeiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 23:59:59 by fribeiro          #+#    #+#             */
/*   Updated: 2022/02/19 00:15:33 by fribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	match(char *s1, char *s2);

int	decide(char *target, char *pattern);

int	compare(char *target, char *pattern);

int	wildcard(char *target, char *pattern);

int	wildcard(char *target, char *pattern)
{
	int	result;

	result = decide(target, pattern + 1);
	if (target[0])
		result |= decide(target + 1, pattern);
	return (result);
}

int	compare(char *target, char *pattern)
{
	int	index;
	int	result;

	index = 0;
	result = 0;
	while (target[index] && pattern[index] && target[index] == pattern[index])
		index++;
	if (pattern[index] == '*')
		result = decide(target + index, pattern + index);
	if (!target[index] && !pattern[index])
		result = 1;
	return (result);
}

int	decide(char *target, char *pattern)
{
	int	result;

	if (pattern[0] == '*')
		result = wildcard(target, pattern);
	else
		result = compare(target, pattern);
	return (result);
}

int	match(char *s1, char *s2)
{
	int	result;

	result = decide(s1, s2);
	return (result);
}

/*
#include <stdio.h>
int main (void)
{
	// simple match
	printf("simple match\n");
	printf("match=%d == 1\n", match("bom dia", "bom dia"));

	// simple match failures
	printf("simple match failures\n");
	printf("match=%d == 0\n", match("bom dia amigo", "bom dia"));
	printf("match=%d == 0\n", match("bom dia", "bom dia amigo"));
	printf("match=%d == 0\n", match("bom dia", "dia"));

	// match with wildcard
	printf("match with wildcard\n");
	printf("match=%d == 1\n", match("bom dia", "bom dia*"));
	printf("match=%d == 1\n", match("abcbd", "*b*"));
	printf("match=%d == 1\n", match("abc", "a**"));
	printf("match=%d == 1\n", match("bom dia", "*dia"));
	printf("match=%d == 1\n", match("bom dia", "*"));
	printf("match=%d == 1\n", match("bom dia", "*di*"));
	printf("match=%d == 1\n", match("bom dia", "*om*d*"));
	printf("match=%d == 1\n", match("alou, bom dia", "*om*"));

	// match with wildcard failures
	printf("match with wildcard failures\n");
	printf("match=%d == 0\n", match("bom dia", "*oi"));
	printf("match=%d == 0\n", match("bom dia", "oi*"));
	printf("match=%d == 0\n", match("bom dia", "*oi*"));
	printf("match=%d == 0\n", match("bom dia", "*blah*"));
	printf("match=%d == 0\n", match("bom dia", "*m*blah*"));
	printf("match=%d == 0\n", match("alou, bom dia", "*om"));

	// empty string failures
	printf("empty string failures\n");
	printf("match=%d == 0\n", match("bom dia", ""));
	printf("match=%d == 0\n", match("", "blah"));

	// empty string match
	printf("empty string match\n");
	printf("match=%d == 1\n", match("", ""));
	printf("match=%d == 1\n", match("", "*"));
	return (0);
}
*/

/* #include <stdio.h>

int	match(char *s1, char *s2);

int	nmatch(char *s1, char *s2);

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
} */

#include <stdio.h>

int	match(char *s1, char *s2);

int	nmatch(char *s1, char *s2);

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
		printf("%i.'%s' \e[1;31mFail!\e[0m\n", index + 1, g_s2[index]);
	}
	return (0);
}
