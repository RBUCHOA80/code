/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_content2index.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 22:07:25 by ruchoa            #+#    #+#             */
/*   Updated: 2022/12/19 07:06:39 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	ft_content2index(t_list *stack, int *template)
{
	int	i;

	while (stack)
	{
		i = 0;
		while (template[i])
		{
			if (*((int *)stack->content) == template[i])
			{
				*((int *)stack->content) = i;
				break ;
			}
			i++;
		}
		stack = stack->next;
	}
	free(template);
	return ;
}
