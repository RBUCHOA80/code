/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 23:08:39 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/13 00:16:43 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(int argc, char **argv)
{
	int	index;
	int	len;

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

int	main(int argc, char **argv)
{
	char	*temp;
	int		count;
	int		index;
	int		j;

	count = argc;
	while (count-- != 0)
	{
		index = 1;
		while (index < argc - 1)
		{
			j = 0;
			while (argv[index][j] == argv[index + 1][j])
				j++;
			if (argv[index][j] > argv[index + 1][j])
			{
				temp = argv[index];
				argv[index] = argv[index + 1];
				argv[index + 1] = temp;
			}
			index++;
		}
	}
	ft_putstr(argc, argv);
	return (0);
}
