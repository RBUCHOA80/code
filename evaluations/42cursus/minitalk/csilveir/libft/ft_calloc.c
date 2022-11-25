/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilveir <csilveir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:33:40 by csilveir          #+#    #+#             */
/*   Updated: 2022/06/06 08:49:47 by csilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pot;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	pot = malloc (count * size);
	if (pot == NULL)
		return (NULL);
	ft_bzero (pot, count * size);
	return (pot);
}
