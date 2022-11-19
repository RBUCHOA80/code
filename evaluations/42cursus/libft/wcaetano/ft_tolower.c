/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 16:51:21 by wcaetano          #+#    #+#             */
/*   Updated: 2022/05/18 16:27:45 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 255 || c == EOF)
		return (c);
	if ((unsigned char) c >= 'A' && (unsigned char) c <= 'Z')
		return ((unsigned char) c + 'a' - 'A');
	return ((unsigned char) c);
}
