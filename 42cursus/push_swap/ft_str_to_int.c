/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:09:07 by ruchoa            #+#    #+#             */
/*   Updated: 2022/12/25 11:46:13 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	*ft_str_to_int(char *str)
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
