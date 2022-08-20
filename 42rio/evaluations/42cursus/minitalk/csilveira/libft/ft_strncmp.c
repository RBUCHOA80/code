/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:31:50 by coder             #+#    #+#             */
/*   Updated: 2022/06/01 11:58:53 by csilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n <= 0)
		return (0);
	else
	{
		while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < (n -1))
			i++;
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
}
