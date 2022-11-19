/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri  <microdri@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 23:24:10 by microdri          #+#    #+#             */
/*   Updated: 2022/03/28 17:59:39 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b > 0)
	{
	*div = a / b;
	*mod = a % b;
	}
}

/* #include <stdio.h>

int main()
{
	int a = 13;
	int b = 0;
	int *div = &a;
	int *mod = &b;
	ft_div_mod(a, b ,div ,mod);
	printf("%d\n",*div);
	printf("%d",*mod);	
} */