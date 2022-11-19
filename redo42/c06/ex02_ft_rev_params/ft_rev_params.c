/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:38:23 by ruchoa            #+#    #+#             */
/*   Updated: 2022/03/16 21:46:47 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	length;
	int	arg;

	arg = (argc - 1);
	while (0 < arg)
	{
		length = 0;
		while (argv[arg][length])
			length++;
		write(1, argv[arg], length);
		write(1, "\n", 1);
		arg--;
	}
	return (0);
}
