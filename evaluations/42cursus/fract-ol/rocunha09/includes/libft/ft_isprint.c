/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafade-o <rafade-o@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:11:43 by rafade-o          #+#    #+#             */
/*   Updated: 2022/05/06 22:41:43 by rafade-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	int	range;

	range = (c >= 32 && c <= 126);
	if (range)
		return (1);
	else
		return (0);
}
