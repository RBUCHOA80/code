/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 22:03:19 by ruchoa            #+#    #+#             */
/*   Updated: 2022/03/28 23:15:02 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> //printf

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 462;
	b = 13;
	div = 0;
	mod = 0;
	printf("a = %i | b = %i | div = %i | mod = %i <- antes\n", a, b, div, mod);
	ft_div_mod(a, b, &div, &mod);
	printf("a = %i | b = %i | div = %i | mod = %i <- depois\n", a, b, div, mod);
	return (0);
} */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
