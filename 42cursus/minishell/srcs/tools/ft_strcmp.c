/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:31:37 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/16 22:11:38 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	len_s1;
	int	len_s2;

	if (s1 == NULL || s2 == NULL)
		return (RETURN_FAILURE);
	len_s1 = ft_strlen(s1) + 1;
	len_s2 = ft_strlen(s2) + 1;
	if (len_s1 && len_s2 && len_s1 < len_s2)
	{
		if (ft_strncmp(s1, s2, len_s1))
			return (RETURN_FAILURE);
	}
	else if (len_s1 && len_s2)
	{
		if (ft_strncmp(s1, s2, len_s2))
			return (RETURN_FAILURE);
	}
	else
		if (ft_strncmp(s1, s2, 1))
			return (RETURN_FAILURE);
	return (RETURN_SUCCESS);
}
