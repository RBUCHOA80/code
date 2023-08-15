/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabatist <pabatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:51:25 by pabatist          #+#    #+#             */
/*   Updated: 2023/08/14 16:51:26 by pabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*ptr;
	size_t		delete;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	delete = count * size;
	ft_bzero(ptr, delete);
	return (ptr);
}
