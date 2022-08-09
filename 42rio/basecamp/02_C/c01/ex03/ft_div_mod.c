/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:38:32 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/09 21:38:32 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	num;
	int	den;
	int	div;
	int	mod;

	num = 100;
	den = 11;
	ft_div_mod(num, den, &div, &mod);
	div = div + 48;
	mod = mod + 48;
	write(1, &div, 1);
	write(1, &mod, 1);
	return (0);
} */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}
