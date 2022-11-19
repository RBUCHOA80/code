/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:47:35 by wcaetano          #+#    #+#             */
/*   Updated: 2022/05/18 10:50:01 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define SIZE_MAX (18446744073709551615UL)

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;

	total_size = nmemb * size;
	if ((total_size / nmemb) != size)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	ft_bzero(ptr, total_size);
	return (ptr);
}
