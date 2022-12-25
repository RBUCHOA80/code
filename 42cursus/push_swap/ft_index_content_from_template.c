/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index_content_from_template.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 22:07:25 by ruchoa            #+#    #+#             */
/*   Updated: 2022/12/25 11:30:20 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	ft_index_content_from_template(t_list *stack, int *template)
{
	int	i;

	if (!(stack && template))
		return ;
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
