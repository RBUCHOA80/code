/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:14:09 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/18 18:15:22 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char	str[] = {"     ---+--+1234ab567"};

	printf("nbr = %i\n", ft_atoi(str));
	return (0);
} */

int	ft_atoi(char *str)
{
	int	is_negative;
	int	nbr;
	int	i;

	is_negative = 1;
	nbr = 0;
	i = 0;
	while ((str[i])
		&& ((str[i] == ' ') || (str[i] == '+') || (str[i] == '-')
			|| ('0' < str[i] && str[i] <= '9')))
	{
		if (str[i] == '-')
			is_negative = is_negative * (-1);
		else if ('0' <= str[i] && str[i] <= '9')
			nbr = (nbr * 10) + (str[i] - 48);
		i++;
	}
	nbr = nbr * is_negative;
	return (nbr);
}
