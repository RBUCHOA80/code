/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:09:15 by ruchoa            #+#    #+#             */
/*   Updated: 2022/03/22 22:59:46 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	length;
	int	i;

	i = 1;
	while (i < argc)
	{
		length = 0;
		while (argv[i][length])
			length++;
		write(1, argv[i], length);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
