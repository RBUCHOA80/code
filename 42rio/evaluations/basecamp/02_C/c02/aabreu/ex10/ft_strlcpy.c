/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:28:53 by coder             #+#    #+#             */
/*   Updated: 2022/02/07 14:01:38 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	const unsigned int	srclen = ft_strlen(src);
	unsigned int		j;

	if (srclen + 1 < size)
	{
		j = 0;
		while (j < srclen + 1)
		{
			dest[j] = src[j];
			j++;
		}
	}
	else if (size != 0)
	{
		j = 0;
		while (j < size - 1)
		{
			dest[j] = src[j];
			j++;
		}
		dest[size - 1] = 0;
	}
	return (srclen);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	j;

	j = 0;
	while (*str != 0)
	{
		j++;
		str++;
	}
	return (j);
}
