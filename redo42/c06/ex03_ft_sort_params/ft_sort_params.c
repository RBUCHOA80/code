/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:47:17 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/13 23:24:44 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_argv(int argc, char **argv)
{
	char	*temp;
	int		count;
	int		i;
	int		j;

	count = argc;
	while (count != 0)
	{
		i = 1;
		while (i < (argc - 1))
		{
			j = 0;
			while (argv[i][j] == argv[i + 1][j])
				j++;
			if (argv[i][j] > argv[i + 1][j])
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
			}
			i++;
		}
		count--;
	}
}

int	main(int argc, char **argv)
{
	int		count;
	int		i;

	if (argc < 2)
		return (0);
	ft_sort_argv(argc, argv);
	i = 1;
	while (i < argc)
	{
		count = 0;
		while (argv[i][count])
			count++;
		write(1, argv[i], count);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
