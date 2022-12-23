/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isvalid_entry.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 07:31:48 by ruchoa            #+#    #+#             */
/*   Updated: 2022/12/23 19:42:29 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	ft_issignal(unsigned char c)
{
	if (!c)
		return (FALSE);
	if (c == '+' || c == '-' || ft_isdigit(c))
		return (TRUE);
	return (FALSE);
}

int	ft_isvalid_entry(char **strs)
{
	int	i;
	int	j;

	i = 0;
	while (strs[i])
	{
		j = 0;
		if (strs[i][j] && ft_issignal(strs[i][j]))
			j++;
		while (strs[i][j])
		{
			if (!ft_isdigit(strs[i][j]))
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
; (ponto e virgula)	<- o terminal trata como se fosse cascatear comandos
& ("e" comercial)	<- o terminal trata como se fosse cascatear comandos
, (virgula)			<- vou trocar por espaço antes do ft_split
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
					"11234567890", \
					";+01", \
					"2b", \
					"c3", \
					"+d", \
					"+4e", \
					};

int	main(void)
{
	ft_isvalid_entry(g_str);
	return (0);
}
