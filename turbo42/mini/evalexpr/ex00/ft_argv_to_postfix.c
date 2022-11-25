/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_postfix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 16:53:12 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/16 18:07:58 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_argv_to_postfix(char *av, int index, int arrcount)
{
	char	*num[1000];
	int		*oper;
	int		*nbr;

	nbr = 0;
	oper = 0;
	while ('0' <= av[index] && av[index] <= '9'
		|| av[index] == '-' && '0' <= av[index + 1] && av[index + 1] <= '9')
	{
		num[arrcount] = ft_charnbr(av, index);
	}
}
