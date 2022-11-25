/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneves <gneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:57:16 by gneves            #+#    #+#             */
/*   Updated: 2022/02/13 17:57:16 by gneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_space(char c)
{
	if (c == ' ' || c == '\v' || c == '\f'
		|| c == '\n' || c == '\t' || c == '\r')
		return (1);
	return (0);
}

int	ft_is_nb(char c)
{
	if (c <= '9' && c >= '1')
		return (1);
	return (0);
}

int	ft_nbrlen(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		while (ft_is_space(str[i]))
			i++;
		if (ft_is_nb(str[i]))
			len++;
		while (ft_is_nb(str[i]))
			i++;
	}
	return (len);
}

int	ft_atoi(const char *str)
{
	int				i;
	unsigned int	nbr;
	int				m;

	nbr = 0;
	m = 1;
	i = 0;
	while (ft_is_space(str[i]))
		i++;
	if (str[i] == '-')
		m *= -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (ft_is_nb(str[i]))
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	nbr = nbr * m;
	if (nbr > 2147483647)
		return (-1);
	return ((int) nbr);
}
