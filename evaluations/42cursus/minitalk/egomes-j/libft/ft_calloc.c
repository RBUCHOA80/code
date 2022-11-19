/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes-j <egomes-j@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:53:26 by egomes-j          #+#    #+#             */
/*   Updated: 2022/05/27 16:10:43 by egomes-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	if (count == 0 || size == 0)
		return (ft_calloc(1, 1));
	res = malloc(count * size);
	if (!res || (((count * size) / count) != size))
		return (NULL);
	if (res)
		ft_bzero(res, (count * size));
	return (res);
}
