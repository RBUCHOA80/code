/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 20:47:21 by ruchoa            #+#    #+#             */
/*   Updated: 2022/03/12 22:36:44 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*s1;
	char	*s2;
	int		n;

	s1 = "Put your s1 sample text here!";
	s2 = "Put your s2 sample text here!";
	n = 9;
	printf("%d\n", strncmp(s1, s2, n));
	printf("%d <- ft_strncmp\n", ft_strncmp(s1, s2, n));
	return (0);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	nbr;
	unsigned int	i;

	nbr = 0;
	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		nbr = s1[i] - s2[i];
		if (nbr != 0)
			return (nbr);
		i++;
	}
	return (0);
}
