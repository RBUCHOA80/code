/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 09:32:46 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/10 21:54:43 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex00/match.c"
#include "ex01/nmatch.c"

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
	}
	return (0);
}
