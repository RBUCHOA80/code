/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits_base.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabatist <pabatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:17:06 by pabatist          #+#    #+#             */
/*   Updated: 2023/08/14 16:17:07 by pabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_digits_base(long long int number, int base)
{
	int	index;

	index = 0;
	if (!number)
		return (1);
	// invert_number_signal(&number);
	while (number != 0)
	{
		index++;
		number /= base;
	}
	return (index);
}
