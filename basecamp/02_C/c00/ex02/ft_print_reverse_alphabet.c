/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 20:46:26 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/15 16:56:47 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* void	ft_print_reverse_alphabet(void);

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
} */

void	ft_print_reverse_alphabet(void)
{
	int	rev;

	rev = (122);
	while (rev > (122 - 26))
	{
		write(1, &rev, 1);
		rev--;
	}
}
