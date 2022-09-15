/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 21:56:17 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/14 23:42:39 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <fcntl.h> // open | close

int	main(void)
{
	t_stack	*list;
	char	**str;
	char	*file;
	int		fd;

	fd = open("./aux_files/array_de_inteiros.txt", O_RDONLY);
	file = get_next_line(fd);
	close(fd);
	str = ft_split(file, ',');
	list = ft_strtolist(str);
	ft_printflist(list);
	ft_printf("Total of %i Node(s).\n", ft_listlen(list));
	ft_freelist(list);
	// ft_printflist(list);
	return (0);
}
