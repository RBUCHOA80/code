/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 23:33:44 by ruchoa            #+#    #+#             */
/*   Updated: 2022/06/11 23:22:47 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;

	if (count == 0 || size == 0)
		return (ft_calloc(1, 1));
	if (((count * size) / count) != size)
		return (NULL);
	ret = (void *)malloc(count * size);
	if (!ret)
		return (NULL);
	ft_bzero(ret, (count * size));
	return (ret);
}

/* int	main(void)
{
	char	*src;
	char	*dest;
	size_t	count;
	size_t	size;

	src = "Put your text here.";
	count = ft_strlen(src);
	size = sizeof(char);
	printf("%p\t%s \n", src, src);
	dest = ft_calloc(count, size);
	if (!dest)
		return (0);
	ft_memmove(dest, src, count);
	printf("%p\t%s \n", dest, dest);
	return (0);
} */
