/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_pangram.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 12:37:19 by ruchoa            #+#    #+#             */
/*   Updated: 2022/07/06 12:37:23 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	is_pangram(const char *str_in)
{
	char	x;

	x = 'a';
	while (x <= 'z')
	{
		if (!(strchr(str_in, x) || strchr(str_in, (x - 32))))
			return (false);
		x++;
	}
	return (true);
}
