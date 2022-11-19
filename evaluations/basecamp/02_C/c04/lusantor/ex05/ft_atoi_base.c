/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 18:52:07 by coder             #+#    #+#             */
/*   Updated: 2022/04/05 18:52:07 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	digit_value(char digit, char *base)
{
	int	count;

	count = 0;
	while (*base != '\0')
	{
		if (*base == digit)
			return (count);
		base++;
		count++;
	}
	return (-1);
}

int	find_base_total(char *base)
{
	int	total;

	total = 0;
	while (base[total] != '\0')
		total++;
	return (total);
}

char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

int	ft_isispace(char c)
{
	char	whitespace[6];
	int		i;

	ft_strcpy(whitespace, " \f\n\r\t\v");
	i = 0;
	while (i < 6)
	{
		if (c == whitespace[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nbr;
	int	base_total;
	int	minus_count;

	nbr = 0;
	minus_count = 0;
	base_total = find_base_total(base);
	while (ft_isispace(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus_count++;
		str++;
	}
	while (digit_value(*str, base) != -1)
	{
		nbr = (nbr + digit_value(*str, base)) * base_total;
		str++;
	}
	nbr = nbr / base_total;
	if (minus_count % 2 != 0)
		nbr = nbr * -1;
	return (nbr);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%i", ft_atoi_base("FFF", "0123456789ABCDEF"));
// 	return (0);
// }
