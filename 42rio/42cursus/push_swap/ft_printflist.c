/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printflist.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:46:58 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/14 18:04:31 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printflist(t_stack *list)
{
	int	i;

	i = 0;
	while (1)
	{
		ft_printf("%p | ", &list[i]);
		ft_printf("Node[%i] | ", i);
		ft_printf("Content = %i | ", list[i].content);
		ft_printf("Next = %p\n", list[i].next);
		if (!list[i].next)
			break ;
		i++;
	}	
}
