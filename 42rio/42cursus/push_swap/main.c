/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 21:56:17 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/14 00:20:21 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <fcntl.h> //open | close

t_stack	*ft_strtolist(char **str)
{
	t_stack	*list;
	int		count;
	int		i;

	count = 0;
	while (str[count])
		count++;
	list = ft_calloc(count, sizeof(*list));
	if (!list)
		return (NULL);
	i = 0;
	while (str[i])
	{
		list[i].content = ft_atoi(str[i]);
		if (i)
			list[i - 1].next = &list[i];
		i++;
	}
	return (list);
}

void	ft_printflist(t_stack *list)
{
	int	i;

	i = 0;
	while (list[i].next)
	{
		ft_printf("%p | ", &list[i]);
		ft_printf("Node[%i] | ", i);
		ft_printf("Next = %p | ", list[i].next);
		ft_printf("Content = %i\n", list[i].content);
		i++;
	}	
}

void	ft_freelist(t_stack *list)
{
	int	count;

	count = 0;
	while (&list[count])
		count++;
	while (count)
		free(&list[count--]);	
}

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
	return (0);
}

/* int	main(int argc, char **argv)
{
	int	*arr;
	int	i;

	if (argc < 2)
		return (1);
	argc -= 1;
	arr = ft_calloc(argc, sizeof(*arr));
	if (!arr)
		return(1);
	i = -1;
	while (++i < argc)
		arr[i] = ft_atoi(argv[i + 1]);
	push_swap(arr, 0, argc - 1);
	ft_printf_arr(arr, argc);
	free(arr);
	return (0);
} */
