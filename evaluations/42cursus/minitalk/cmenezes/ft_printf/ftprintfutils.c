/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintfutils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmenezes <cmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 20:27:22 by cmenezes          #+#    #+#             */
/*   Updated: 2022/09/10 19:42:19 by cmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putchar(char c);

size_t	ft_strlen(const char *ch)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (ch[i++] != '\0')
		c++;
	return ((size_t)c);
}

int	ft_dectohex(unsigned long numb, char type)
{
	int		count;
	char	*chex;

	count = 0;
	chex = "0123456789ABCDEF0123456789abcdef";
	if (numb >= 16)
	{
		count += ft_dectohex(numb / 16, type);
		count += ft_dectohex(numb % 16, type);
	}
	if (numb < 16)
	{
		if (type == 'X')
			count += ft_putchar(chex[numb]);
		if (type == 'x')
			count += ft_putchar(chex[numb + 16]);
	}
	return (count);
}

int	ft_putchar(char c)
{
	int	n;

	n = write(1, &c, 1);
	return (n);
}

int	ft_putstr(char *s)
{
	size_t	i;
	size_t	len;

	i = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	len = ft_strlen(s);
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return (len);
}

int	ft_putintnbr(int n)
{
	unsigned int	nr;
	int				ret;

	ret = 0;
	if (n < 0)
	{
		ret += ft_putchar('-');
		nr = (unsigned int)(n * -1);
	}
	else
		nr = (unsigned int)n;
	if (nr >= 10)
		ret += ft_putintnbr(nr / 10);
	ret += ft_putchar(nr % 10 + '0');
	return (ret);
}
