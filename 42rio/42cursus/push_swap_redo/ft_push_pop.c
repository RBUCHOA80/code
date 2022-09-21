/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_pop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 23:49:17 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/21 00:01:41 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_top(t_list **stack, void *content)
{
	ft_lstadd_front(stack, content);
	return ;
}

void	ft_push_base(t_list **stack, void *content)
{
	ft_lstadd_back(stack, content);
	return ;
}

void	*ft_pop_top(t_list **stack)
{
	t_list	*temp;
	void	*content;

	content = (*stack)->content;
	temp = *stack;
	*stack = (*stack)->next;
	free(temp);
	return (content);
}

void	*ft_pop_base(t_list **stack)
{
	void	*content;

	return (content);
}
