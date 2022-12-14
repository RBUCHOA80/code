/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 04:47:33 by coder             #+#    #+#             */
/*   Updated: 2022/02/06 18:46:15 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	if (!str)
	{
		return (1);
	}
	while (*str != 0)
	{
		if (*str < 32 || *str == 127)
		{
			return (0);
		}
		str++;
	}
	return (1);
}
