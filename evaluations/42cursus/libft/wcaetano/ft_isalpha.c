/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 10:45:03 by WCAETANO          #+#    #+#             */
/*   Updated: 2022/05/18 16:54:09 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c > UCHAR_MAX)
		return (0);
	return (((unsigned char) c >= 'a' && (unsigned char) c <= 'z')
		|| ((unsigned char) c >= 'A' && (unsigned char) c <= 'Z'));
}
