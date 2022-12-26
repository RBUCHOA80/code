/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isvalid_entry.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 07:31:48 by ruchoa            #+#    #+#             */
/*   Updated: 2022/12/25 21:39:17 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_issignal(unsigned char c)
{
	if (!c)
		return (0);
	if (c == '+' || c == '-')
		return (1);
	return (0);
}

int	ft_isvalid_entry(char *argv)
{
	char	**strs;
	int		i;
	int		j;

	if (!argv)
		return (0);
	strs = ft_split(argv++, ' ');
	i = 0;
	while (strs[i])
	{
		j = 0;
		if (ft_issignal(strs[i][j]))
			j++;
		while (strs[i][j])
			if (!ft_isdigit(strs[i][j++]))
				return (0);
		i++;
	}
	return (1);
}

/*
some arguments aren’t integers
some arguments are bigger than an integer 
and/or there are duplicates
" (aspas duplas)	<- o shell remove
' (aspas simples)	<- o shell remove
& ("e" comercial)	<- o terminal trata como se fosse cascatear comandos
&& ("e" comercial)	<- o terminal trata como se fosse cascatear comandos
; (ponto e virgula)	<- o terminal trata como se fosse cascatear comandos
; (ponto e virgula)	<- vou trocar por espaço antes do ft_split
, (virgula)			<- vou trocar por espaço antes do ft_split
( (virgula)			<- vou trocar por espaço antes do ft_split
) (virgula)			<- vou trocar por espaço antes do ft_split
{ (virgula)			<- vou trocar por espaço antes do ft_split
} (virgula)			<- vou trocar por espaço antes do ft_split
[ (virgula)			<- vou trocar por espaço antes do ft_split
] (virgula)			<- vou trocar por espaço antes do ft_split
. (ponto)			<- não vou fazer nada, o atoi só considera a parcela inteira
*/

/* void	ft_chr2space(char *str, char *chr)
{
	int	i;
	int	j;

	if (!str || !chr)
		return ;
	i = 0;
	while (str[i])
	{
		j = 0;
		while (chr[j])
		{
			if (str[i] == chr[j])
				str[i] = ' ';
			j++;
		}		
		i++;
	}
}

int	ft_issignal(unsigned char c)
{
	if (!c)
		return (0);
	if (c == '+' || c == '-')
		return (1);
	return (0);
}

int	ft_isvalid_entry(char **strs)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	while (strs[i])
	{
		len = 10;
		j = 0;
		if (strs[i][j] && (strs[i][j] == '+' || strs[i][j] == '-'))
		{
			len++;
			j++;
		}
		while (strs[i][j])
		{
			if (!ft_isdigit(strs[i][j]) || (j > len))
				ft_printf("\e[1;31mstrs[%i][%i] = %c\n\e[0m", i, j, strs[i][j]);
			j++;
		}
		i++;
	}
	return (1);
}

char	*g_str[] = {\
					"+01", \
					"-23", \
					"-23", \
					"+56", \
					"64", \
					"+1234567890", \
					"1234567890", \
					"-1234567890", \
					"+2147483647", \
					"-2147483648", \
					"112345678900", \
					";+01", \
					"2b", \
					"c3", \
					"+d", \
					"+4e 56", \
					};

int	main(void)
{
	char	str[] = "P,u;t y(o)ur s{a}mple t[ex]t here";
	char	*chr;

	ft_isvalid_entry(g_str);
	chr = ",;(){}[]";
	ft_printf(" antes -> %s\n", str);
	ft_chr2space(str, chr);
	ft_printf("depois -> %s\n", str);
	return (0);
} */
