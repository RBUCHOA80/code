/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:20:25 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/15 22:24:06 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_o_swap(t_stack *stack)
{
	t_stack	temp;

	temp = stack[0];
	stack[0] = stack[1];
	stack[1] = temp;
	stack = &stack[1];
	return ;
}

/*
sa (swap a):
Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements.
*/
void	sa(t_stack *stack_a)
{
	ft_o_swap(stack_a);
	return ;
}

/*
sb (swap b):
Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements.
*/
void	sb(t_stack *stack_b)
{
	ft_o_swap(stack_b);
	return ;
}

/*
ss :
sa and sb at the same time.
*/
void	ss(t_stack *stack_a, t_stack *stack_b)
{
	sa(stack_a);
	sb(stack_b);
	return ;
}

int	main(void)
{
	int		fd;
	char	*file;
	char	**str;
	t_stack	*list;

	fd = open("./aux_files/array_de_inteiros.txt", O_RDONLY);
	file = get_next_line(fd);
	str = ft_split(file, ',');
	list = ft_str_to_list(str);
	ft_printf_list(list);
	ft_printf("Total of %i Node(s).\n", ft_list_len(list));
	sa(list);
	ft_printf_list(list);
	close(fd);
	free(file);
	ft_free_str(str);
	free(list);
	return (0);
}
