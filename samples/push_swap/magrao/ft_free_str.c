/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 21:20:48 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/15 21:30:36 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_str(char **str)
{
	int	count;

	if (!str)
		return ;
	count = 0;
	while (str[count])
		count++;
	while (count--)
		free(str[count]);
	free(str);
}
