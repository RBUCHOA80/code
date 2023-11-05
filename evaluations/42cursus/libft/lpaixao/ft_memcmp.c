/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 14:14:57 by ruchoa            #+#    #+#             */
/*   Updated: 2022/05/08 14:14:57 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = s1;
	p2 = s2;
	if (n != 0)
	{
		while (n)
		{
			if (*p1++ != *p2++)
				return (*--p1 - *--p2);
			--n;
		}
	}
	return (0);
}

/* int	main(void)
{
	char	*s1;
	char	*s2;
	int		n;
	int		result;

	s1 = "Put your text here.";
	s2 = "Put your text here!";
	n = 18;
	result = ft_strncmp(s1, s2, n);
	printf("result = %i \n", result);
	return (0);
} */
