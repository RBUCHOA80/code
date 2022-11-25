/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 16:42:07 by wcaetano          #+#    #+#             */
/*   Updated: 2022/05/18 16:23:46 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 255 || c == EOF)
		return (c);
	if ((unsigned char) c >= 'a' && (unsigned char) c <= 'z')
		return ((unsigned char) c + 'A' - 'a');
	return ((unsigned char) c);
}
