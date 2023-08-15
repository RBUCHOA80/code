/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabatist <pabatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:17:30 by pabatist          #+#    #+#             */
/*   Updated: 2023/08/14 16:17:31 by pabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static	void	ft_writenbr(unsigned long long int nb, char *strnbr, size_t maxsize, char *base)
{
	char	character;

	character = '\0';
	if (nb < ft_strlen(base))
	{
		character = base[nb];
		ft_strlcat(strnbr, &character, maxsize);
		return ;
	}
	else
		ft_writenbr(nb / ft_strlen(base), strnbr, maxsize, base);
	ft_writenbr(nb % ft_strlen(base), strnbr, maxsize, base);
}

static	unsigned int	set_nbr(long long int n)
{
	unsigned long long int	nbr;

	if (n < 0)
		nbr = n * -1;
	else
		nbr = n;
	return (nbr);
}

char	*ft_itoa_base(long long int n, char *base)
{
	char			*ret;
	size_t			ret_lenght;
	unsigned int	nbr;

	nbr = set_nbr(n);
	ret_lenght = ft_count_digits_base(nbr, ft_strlen(base));
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
	ft_writenbr(nbr, ret, ret_lenght + 1, base);
	return (ret);
}
