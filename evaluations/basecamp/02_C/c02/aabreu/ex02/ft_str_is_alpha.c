/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 04:33:49 by coder             #+#    #+#             */
/*   Updated: 2022/02/06 18:43:59 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if (!str)
	{
		return (1);
	}
	while (*str != 0)
	{
		if (! ((*str > 64 && *str < 91) || (*str > 96 && *str < 123)))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
