/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchastin <vchastin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:44:12 by vchastin          #+#    #+#             */
/*   Updated: 2023/03/04 17:45:39 by vchastin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	write_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	check_sorted(t_stack *a)
{
	t_node	*node;

	node = a->top;
	while (node->next)
	{
		if (node->content > node->next->content)
			return (0);
		node = node->next;
	}
	return (1);
}

void	check_duplicate(t_stack *stack, int num)
{
	t_node	*aux;

	aux = stack->top;
	while (aux)
	{
		if (aux->content == num)
			write_error();
		aux = aux->next;
	}
}

/*Verifique se os dados recebidos estão no formato "4 5 3"*/
int	check_format(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (argv[i] == ' ')
			return (1);
		i++;
	}
	return (0);
}

void	check_arguments(int argc, char **argv)
{
	int	i;
	int	j;
	int	flag;

	i = 1;
	flag = 0;
	if (argc <= 1)
		exit(0);
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
			{
				flag = 1;
				break ;
			}
			j++;
		}
		if (flag == 0)
			write_error();
		i++;
	}
}
