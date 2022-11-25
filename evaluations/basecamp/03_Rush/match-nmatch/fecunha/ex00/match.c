/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fecunha <fecunha@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 17:13:47 by fecunha           #+#    #+#             */
/*   Updated: 2022/04/11 06:59:57 by fecunha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	match(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (match(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (match(s1, s2 + 1) || match(s1 + 1, s2));
	return (0);
}

/* #include <stdio.h>
int main()
{
    printf("%i", match("main.c", "*.c"));
    printf("\n");
    printf("%i", match("main.c", ".c"));
    printf("\n");
    return (0);
} */

#include <stdio.h>

// int	nmatch(char *s1, char *s2);

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
		if (match(g_s1, g_s2[index]))
			printf("\e[1;32mMATCH!\e[0m %2i.'%s'\n", index + 1, g_s2[index]);
		else
			printf("\e[1;31mFail!!\e[0m %2i.'%s'\n", index + 1, g_s2[index]);
		// printf("%i\n", nmatch(g_s1, g_s2[index]));
	}
	return (0);
}
