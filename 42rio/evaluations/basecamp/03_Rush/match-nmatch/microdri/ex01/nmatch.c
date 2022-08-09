/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri  <microdri@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 06:47:02 by microdri          #+#    #+#             */
/*   Updated: 2022/04/11 06:47:02 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	nmatch(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
		return (nmatch(s1 + 1, s2 + 1));
	if (*s1 != '\0' && *s2 == '*')
		return (nmatch(s1, s2 + 1) + nmatch(s1 + 1, s2));
	if (*s1 == '\0' && *s2 == '*')
		return (nmatch(s1 + 1, s2));
	return (0);
}

/* #include <stdio.h>

int main(void)
{
    char s1[] = "main.c"; //1
    char s2[] = "*.c";
    printf("%i", match(s1, s2));
    printf("\n");

    char s3[] = "Put your"; //1
    char s4[] = "Put*your";
    printf("%i", match(s3, s4));
    printf("\n");

    char s5[] = "Put your"; //1
    char s6[] = "Put *our";
    printf("%i", match(s5, s6));
    printf("\n");

	char s7[] = "Put your"; //1
    char s8[] = "Put yo*";
    printf("%i", match(s7, s8));
    printf("\n");

	char s9[] = "Put your"; //0
    char s10[] = "Put yo";
    printf("%i", match(s9, s10));
    printf("\n");

	char s11[] = "Put your"; //1
    char s12[] = "P*y*";
    printf("%i", match(s11, s12));
    printf("\n");

    return (0);
} */

#include <stdio.h>

int	match(char *s1, char *s2);

char	g_s1[] = "Put your sample text here";
char	g_s2[][50]
	= {
	/*Fail!!  1.*/	"Put",
	/*MATCH!  2.*/	"Put*",
	/*MATCH!  3.*/	"Put**",
	/*Fail!!  4.*/	"Put here your sample text",
	/*MATCH!  5.*/	"Put***here",
	/*Fail!!  6.*/	"Put your sample text here123",
	/*Fail!!  7.*/	"P*tyor*",
	/*MATCH!  8.*/	"P*t your*",
	/*Fail!!  9.*/	"Put*s",
	/*MATCH! 10.*/	"P**ut*s*",
	/*MATCH! 11.*/	"*here",
	/*MATCH! 12.*/	"*sample*",
	/*MATCH! 13.*/	"*ex*",
	/*Fail!! 14.*/	"",
};

int	main(void)
{
	int	index;

	index = -1;
	while (++index < (int)(sizeof(g_s2) / sizeof(g_s2[0])))
	{
		if (nmatch(g_s1, g_s2[index]))
			printf("\e[1;32mMATCH!\e[0m %2i.'%s'\n", index + 1, g_s2[index]);
		else
			printf("\e[1;31mFail!!\e[0m %2i.'%s'\n", index + 1, g_s2[index]);
		printf("%i\n", nmatch(g_s1, g_s2[index]));
	}
	return (0);
}
