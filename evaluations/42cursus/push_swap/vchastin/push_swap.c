/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:58:54 by vchastin          #+#    #+#             */
/*   Updated: 2023/03/04 18:53:42 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_stack(void)
{
	t_stack	*stack;

	stack = (t_stack *) malloc(sizeof(t_stack));
	if (stack == NULL)
		return (0);
	stack->top = NULL;
	stack->bottom = NULL;
	stack->size = 0;
	return (stack);
}

void	str_to_stack(t_stack *a, char **str)
{
	int	i;
	int	tmp;

	i = 0;
	while (str[i])
	{
		tmp = ft_atoi(str[i]);
		push_node_bottom(a, tmp, 0);
		i++;
	}
	free_array(str, i);
}

/*Divide os dados recebidos no formato "5 4 6" em 5 4 6
A função também armazena esses valores na stack_a
ft_split divide a partir dos espaços*/
void	insert_number_stack(int argc, char **argv, t_stack *stack)
{
	int		index;
	char	**num_split;

	index = 1;
	while (index < argc)
	{
		if (check_format(argv[index]))
		{
			num_split = ft_split(argv[index], ' ');
			if (!num_split)
				write_error();
			str_to_stack(stack, num_split);
		}
		else
			push_node_bottom(stack, ft_atoi(argv[index]), 0);
		index++;
	}
}

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	check_arguments(argc, argv);
	stack_a = create_stack();
	stack_b = create_stack();
	insert_number_stack(argc, argv, stack_a);
	sort(stack_a, stack_b);
	free_stacks(stack_a, stack_b);
	return (0);
}
