/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 18:51:40 by coder             #+#    #+#             */
/*   Updated: 2022/04/05 18:51:40 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
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

int	ft_atoi(char *str)
{
	int	nbr;
	int	minus_count;

	nbr = 0;
	minus_count = 0;
	while (ft_isispace(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus_count++;
		str++;
	}
	while (ft_char_is_numeric(*str))
	{
		nbr = (nbr * 10) + (*str - '0');
		str++;
	}
	// nbr = nbr / 10;
	if (minus_count % 2 != 0)
		nbr = nbr * -1;
	return (nbr);
}

#include <stdio.h>

int	main(void)
{
	printf("%i", ft_atoi("2147483647"));
	return (0);
}

// int	main(int argc, char **argv)
// {
// 	printf("%i", ft_atoi(argv[argc - 1]));
// 	return (0);
// }
