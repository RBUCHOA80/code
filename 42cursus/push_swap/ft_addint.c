/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:09:07 by ruchoa            #+#    #+#             */
/*   Updated: 2022/11/21 22:09:17 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	*ft_addint(char *str)
{
	int	*dest;

	if (!str)
		return (NULL);
	dest = (int *)ft_calloc(1, sizeof(*dest));
	if (!dest)
		return (NULL);
	*dest = ft_atoi(str);
	return (dest);
}
