/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 20:00:00 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/20 19:07:55 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "Put your s1 sample text here!";
	s2 = "Put your s2 sample text here!";
	printf("%d\n", strcmp(s1, s2));
	printf("%d <- ft_strcmp\n", ft_strcmp(s1, s2));
	return (0);
} */

int	ft_strcmp(char *s1, char *s2)
{
	int	nbr;
	int	i;

	nbr = 0;
	i = 0;
	while (s1[i] && s2[i])
	{
		nbr = s1[i] - s2[i];
		if (nbr != 0)
			return (nbr);
		i++;
	}
	return (0);
}
