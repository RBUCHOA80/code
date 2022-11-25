/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fribeiro <fribeiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 23:59:59 by fribeiro          #+#    #+#             */
/*   Updated: 2022/02/19 00:15:33 by fribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nmatch(char *s1, char *s2);

int	decide(char *target, char *pattern);

int	compare(char *target, char *pattern);

int	wildcard(char *target, char *pattern);

int	wildcard(char *target, char *pattern)
{
	int	result;

	result = decide(target, pattern + 1);
	if (target[0])
		result += decide(target + 1, pattern);
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
		result += decide(target + index, pattern + index);
	if (!target[index] && !pattern[index])
		result += 1;
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

int	nmatch(char *s1, char *s2)
{
	int	result;

	result = decide(s1, s2);
	return (result);
}


/* #include <stdio.h>
int main (void)
{
	// simple nmatch
	printf("simple nmatch\n");
	printf("nmatch=%d == 1\n", nmatch("bom dia", "bom dia"));

	// simple nmatch failures
	printf("simple nmatch failures\n");
	printf("nmatch=%d == 0\n", nmatch("bom dia amigo", "bom dia"));
	printf("nmatch=%d == 0\n", nmatch("bom dia", "bom dia amigo"));
	printf("nmatch=%d == 0\n", nmatch("bom dia", "dia"));

	// nmatch with wildcard
	printf("nmatch with wildcard\n");
	printf("nmatch=%d == 1\n", nmatch("bom dia", "bom dia*"));
	printf("nmatch=%d == 2\n", nmatch("abcbd", "*b*"));
	printf("nmatch=%d == 3\n", nmatch("abc", "a**"));
	printf("nmatch=%d == 1\n", nmatch("bom dia", "*dia"));
	printf("nmatch=%d == 1\n", nmatch("bom dia", "*"));
	printf("nmatch=%d == 1\n", nmatch("bom dia", "*di*"));
	printf("nmatch=%d == 1\n", nmatch("bom dia", "*om*d*"));
	printf("nmatch=%d == 1\n", nmatch("alou, bom dia", "*om*"));

	// nmatch with wildcard failures
	printf("nmatch with wildcard failures\n");
	printf("nmatch=%d == 0\n", nmatch("bom dia", "*oi"));
	printf("nmatch=%d == 0\n", nmatch("bom dia", "oi*"));
	printf("nmatch=%d == 0\n", nmatch("bom dia", "*oi*"));
	printf("nmatch=%d == 0\n", nmatch("bom dia", "*blah*"));
	printf("nmatch=%d == 0\n", nmatch("bom dia", "*m*blah*"));
	printf("nmatch=%d == 0\n", nmatch("alou, bom dia", "*om"));

	// empty string failures
	printf("empty string failures\n");
	printf("nmatch=%d == 0\n", nmatch("bom dia", ""));
	printf("nmatch=%d == 0\n", nmatch("", "blah"));

	// empty string nmatch
	printf("empty string nmatch\n");
	printf("nmatch=%d == 1\n", nmatch("", ""));
	printf("nmatch=%d == 1\n", nmatch("", "*"));
	return (0);
}
 */

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
	"***here",		//MATCH
	"*sample*",		//MATCH
	"**P*t*s*",		//MATCH
};

int	main(void)
{
	int	index;

	index = -1;
	while (*g_s2[++index])
	{
		printf("%i\n", nmatch(g_s1, g_s2[index]));
	}
	return (0);
}
