/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 20:46:20 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/15 16:56:37 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* void	ft_print_alphabet(void);

int	main(void)
{
	ft_print_alphabet();
	return (0);
} */

void	ft_print_alphabet(void)
{
	int	alphabet;

	alphabet = 97;
	while (alphabet < (97 + 26))
	{
		write(1, &alphabet, 1);
		alphabet++;
	}
}
