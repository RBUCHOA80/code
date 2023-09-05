/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:17:40 by pabatist          #+#    #+#             */
/*   Updated: 2023/09/05 05:26:43 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_strlcat_nonnull(char *dest, const char *src, size_t maxlen)
{
	unsigned int	dsize;
	unsigned int	index;

	if (maxlen <= ft_strlen(dest))
		return (maxlen + ft_strlen(src));
	dsize = ft_strlen(dest);
	if (dsize > 1)
		dsize--;
	index = 0;
	while (src[index] && dsize < maxlen - 1)
		dest[dsize++] = src[index++];
	return (ft_strlen(dest) + ft_strlen(&src[index]));
}

static	void	ft_msgnbr(unsigned int nb, char *strnbr, size_t maxsize)
{
	char	character;

	character = '\0';
	if (nb < 10)
	{
		character = nb + 48;
		ft_strlcat_nonnull(strnbr, &character, maxsize);
		return ;
	}
	else
		ft_msgnbr(nb / 10, strnbr, maxsize);
	ft_msgnbr(nb % 10, strnbr, maxsize);
	strnbr[maxsize] = '\0';
}

static	unsigned int	set_nbr(int n)
{
	unsigned int	nbr;

	if (n < 0)
		nbr = n * -1;
	else
		nbr = n;
	return (nbr);
}

static	size_t	set_ret_lenght(int nbr)
{
	size_t	ret_lenght;

	ret_lenght = 0;
	while (nbr)
	{
		ret_lenght++;
		nbr /= 10;
	}
	return (ret_lenght);
}

char	*ft_itoa(int n)
{
	char			*ret;
	size_t			ret_lenght;
	unsigned int	nbr;

	nbr = set_nbr(n);
	ret_lenght = set_ret_lenght(nbr);
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		ret = (char *)ft_calloc(ret_lenght + 1 + 1, sizeof(char));
		if (!ret)
			return (NULL);
		ret[0] = '-';
		ret_lenght++;
	}
	else
		ret = (char *)ft_calloc(ret_lenght + 1, sizeof(char));
	if (!ret)
		return (NULL);
	ft_msgnbr(nbr, ret, ret_lenght + 1);
	return (ret);
}
