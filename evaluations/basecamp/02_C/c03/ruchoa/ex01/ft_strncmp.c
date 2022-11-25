/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:55:16 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/05 00:45:40 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char			*s1;
	char			*s2;
	unsigned int	n;

	n = 26;
	s1 = "Put your sample text here.";
	s2 = "Put your sample text here. Test";
	printf("%i <=> %s\n", strncmp(s1, s2, n), s1);
	printf("%i <=> %s <- ft_strncmp\n", ft_strncmp(s1, s2, n), s1);
	return (0);
} */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
