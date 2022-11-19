/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 21:59:55 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/12 22:28:01 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	len;

	if (argc != 0)
	{
		len = 0;
		while (argv[0][len] != '\0')
		{
			len++;
		}
		write(1, argv[0], len);
		write(1, "\n", 1);
	}
	return (0);
}
