/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:02:44 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/10 11:02:44 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 34;
	b = 8;
	ft_ultimate_div_mod(&a, &b);
	a = a + 48;
	b = b + 48;
	write(1, &a, 1);
	write(1, &b, 1);
	return (0);
} */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = (*a / *b);
	*b = (temp % *b);
}
