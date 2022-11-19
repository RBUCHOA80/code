/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 17:41:42 by coder             #+#    #+#             */
/*   Updated: 2022/03/31 00:14:42 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if ((s1[i] == s2[i]) && (s1 != 0) && (s2 != 0))
			i++;
		else
			return (s1[i] - s2[i]);
	}
	if ((s1[i] == 0) || (s2[i] == 0))
		return (0);
	else
		return (s1[i] - s2[i]);
}
