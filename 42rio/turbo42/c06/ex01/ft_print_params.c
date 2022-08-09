/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 22:28:27 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/12 23:04:31 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	index;
	int	len;

	if (argc != 0)
	{
		index = 1;
		while (index < argc)
		{
			len = 0;
			while (argv[index][len])
				len++;
			write(1, argv[index], len);
			write(1, "\n", 1);
			index++;
		}
	}
	return (0);
}
