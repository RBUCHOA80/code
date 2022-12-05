/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsttake_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 23:49:17 by ruchoa            #+#    #+#             */
/*   Updated: 2022/12/05 18:41:57 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	*ft_lsttake_front(t_list **stack)
{
	t_list	*temp;
	void	*content;

	if (!(stack && *stack))
		return (NULL);
	content = (*stack)->content;
	temp = (*stack);
	*stack = (*stack)->next;
	free(temp);
	return (content);
}
