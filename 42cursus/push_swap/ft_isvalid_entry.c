/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isvalid_entry.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 07:31:48 by ruchoa            #+#    #+#             */
/*   Updated: 2022/12/21 07:31:08 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	ft_isvalid_entry(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]))
			{
				ft_printf("argv[%i][%i] = %c\n", i, j, argv[i][j]);
				return (FALSE);
			}
			j++;
		}
		i++;
	}
	return (TRUE);
}

int	main(int argc, char **argv)
{
	int	ret;

	(void) argc;
	ret = ft_isvalid_entry(argv);
	if (!ret)
		write(1, "\e[1;31mSYNTAX ERROR\n\e[0m", 24);
	else if (ret)
		write(1, "\e[1;32mTRUE ENTRY\n\e[0m", 23);
	return (0);
}
