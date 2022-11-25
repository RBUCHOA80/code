/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 21:56:17 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/20 19:03:31 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(void)
{
	int		fd;
	char	*file;
	char	**str;
	t_list	*list;

	fd = open("./aux_files/array_de_inteiros.txt", O_RDONLY);
	file = get_next_line(fd);
	str = ft_split(file, ',');
	list = ft_str_to_list(str);
	ft_printf_list(list);
	close(fd);
	free(file);
	free(list);
	return (0);
}
