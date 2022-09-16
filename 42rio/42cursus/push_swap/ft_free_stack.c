/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:48:25 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/15 21:30:32 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_list(t_stack *list)
{
	int	count;

	if (!list)
		return ;
	count = ft_listlen(list);
	while (count--)
	{
		ft_printf("freeing Node[%i]\n", count);
	}
	free(list);
}
