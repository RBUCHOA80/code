/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isvalid_entry.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 07:31:48 by ruchoa            #+#    #+#             */
/*   Updated: 2022/12/24 20:00:51 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	ft_chr2space(char *str, char *chr)
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
		return (FALSE);
	if (c == '+' || c == '-')
		return (TRUE);
	return (FALSE);
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
	return (TRUE);
}

/*
Nunca irá receber os seguintes caracteres:
" (aspas duplas)	<- o shell remove
' (aspas simples)	<- o shell remove
& ("e" comercial)	<- o terminal trata como se fosse cascatear comandos
; (ponto e virgula)	<- vou trocar por espaço antes do ft_split
, (virgula)			<- vou trocar por espaço antes do ft_split
( (virgula)			<- vou trocar por espaço antes do ft_split
) (virgula)			<- vou trocar por espaço antes do ft_split
{ (virgula)			<- vou trocar por espaço antes do ft_split
} (virgula)			<- vou trocar por espaço antes do ft_split
[ (virgula)			<- vou trocar por espaço antes do ft_split
] (virgula)			<- vou trocar por espaço antes do ft_split
*/

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
					"+4e", \
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
}
