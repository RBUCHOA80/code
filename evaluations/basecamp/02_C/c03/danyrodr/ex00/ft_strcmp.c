/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:29:58 by danyrodr          #+#    #+#             */
/*   Updated: 2022/04/05 05:11:39 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			i = ((unsigned char)s1[i] - (unsigned char)s2[i]);
			return (i);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	//char s1[100] = "auda";
	//char s2[] = "saude";z

	char s1[100] = {'A', 'b', 'c', -12, 'e'};
	char s2[] = {0, 'b', 'c', 'd', 'e'};

	printf("%d ft_strcmp\n", ft_strcmp(s1,s2));
	printf("%d Original\n", strcmp(s1,s2));

	return (0);
}
