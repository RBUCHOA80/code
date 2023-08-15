/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits_base.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:17:06 by pabatist          #+#    #+#             */
/*   Updated: 2023/08/15 19:52:30 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_digits_base(long long int number, int base)
{
	int	index;

	index = 0;
	if (!number)
		return (1);
	while (number != 0)
	{
		index++;
		number /= base;
	}
	return (index);
}
