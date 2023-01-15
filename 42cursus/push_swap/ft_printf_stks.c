/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_stks.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 10:06:41 by ruchoa            #+#    #+#             */
/*   Updated: 2022/12/25 10:06:16 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	ft_printf_stks(t_list *stk_a, t_list *stk_b)
{
	int	size_a;
	int	size_b;

	size_a = ft_lstsize(stk_a);
	size_b = ft_lstsize(stk_b);
	while (size_a || size_b)
	{
		if (size_a >= size_b)
		{
			ft_printf("%p  %d ", stk_a->content, *((int *)stk_a->content));
			stk_a = stk_a->next;
			size_a--;
		}
		else
			ft_printf("                  ");
		ft_printf(" |  ");
		if (size_b >= size_a + 1)
		{
			ft_printf("%d  %p", *((int *)stk_b->content), stk_b->content);
			stk_b = stk_b->next;
			size_b--;
		}
		ft_printf("\n");
	}
}
