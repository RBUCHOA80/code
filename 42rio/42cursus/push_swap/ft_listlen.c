/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:19:11 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/14 19:28:21 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_listlen(t_stack *list)
{
	int	len;

	len = 0;
	while (1)
	{
		if (!list[len].next)
			break ;
		len++;
	}
	return (len);
}
