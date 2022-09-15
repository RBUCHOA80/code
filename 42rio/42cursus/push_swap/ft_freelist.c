/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freelist.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:48:25 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/14 23:44:43 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_freelist(t_stack *list)
{
	int	count;

	count = ft_listlen(list);
	while (count--)
	{
		ft_printf("freeing Node[%i]\n", count);
		free(&list[count]);
	}
}
