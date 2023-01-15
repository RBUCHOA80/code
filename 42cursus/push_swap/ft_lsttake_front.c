/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsttake_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 23:49:17 by ruchoa            #+#    #+#             */
/*   Updated: 2023/01/15 07:31:40 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	*ft_lsttake_front(t_list **stk)
{
	t_list	*temp;
	void	*content;

	if (!(stk && *stk))
		return (NULL);
	content = (*stk)->content;
	temp = (*stk);
	*stk = (*stk)->next;
	free(temp);
	return (content);
}
