/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimachad <fimachad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 14:12:57 by fimachad          #+#    #+#             */
/*   Updated: 2022/06/13 19:06:00 by fimachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	calculate_int_length(long i)
{
	size_t	c;

	c = 0;
	while (i > 0)
	{
		i /= 10;
		c++;
	}
	return (c);
}

static char	*zero_guard(void)
{
	char	*s;

	s = (char *)malloc(2);
	s[0] = 48;
	s[1] = '\0';
	return (s);
}

static void	fill_int_string(char *s, size_t c, long l)
{
	while (c-- > 0)
	{
		s[c] = (l % 10) + 48;
		l /= 10;
	}
}

char	*ft_itoa(int n)
{
	size_t	c;
	char	*s;
	int		is_negative;
	long	l;

	c = 0;
	l = (long )n;
	is_negative = 0;
	if (n == 0)
		return (zero_guard());
	if (l < 0)
	{
		l = l * -1;
		is_negative = 1;
		c++;
	}
	c = c + calculate_int_length(l);
	s = (char *)malloc(c +1);
	if (s == NULL)
		return (NULL);
	s[c] = '\0';
	fill_int_string(s, c, l);
	if (is_negative != 0)
		s[0] = '-';
	return (s);
}
