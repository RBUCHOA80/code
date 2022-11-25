/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:29:58 by danyrodr          #+#    #+#             */
/*   Updated: 2022/04/04 20:09:37 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while ((i < n) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			j = (s1[i] - s2[i]);
			return (j);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
int main()
{
	char palavra1[50] = "Dannelle";
	char palavra2[50] = "Danny";

	int n = -1;

	printf("função do C: %i\n", strncmp(palavra1, palavra2, n));

	printf("função do ex01: %d\n", ft_strncmp(palavra1, palavra2, n));

	return (0);
}
