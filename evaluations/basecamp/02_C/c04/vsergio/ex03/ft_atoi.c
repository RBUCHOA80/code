/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 09:56:43 by vsergio           #+#    #+#             */
/*   Updated: 2022/05/08 17:29:01 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	if_negative;
	int	nbr;
	int	i;

	if_negative = 1;
	nbr = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			if_negative *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = (nbr * 10) + (str[i] - 48);
		i++;
	}
	return (if_negative * nbr);
}

// #include <stdio.h>
//  int main(void)
//  {
//  	char string[] = " ---+--+1234ab567";
//  	printf("O valor eh: %i\n", ft_atoi(string));
//  }

//	[532] 0 + (58-48) = 5 / 50 + (51-48) = 53 / 530 + (50-48) = 532
