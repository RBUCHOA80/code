/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freelist.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:48:25 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/14 17:56:26 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_freelist(t_stack *list)
{
	int	count;

	count = 0;
	while (&list[count])
		count++;
	while (count)
		free(&list[count--]);
}
