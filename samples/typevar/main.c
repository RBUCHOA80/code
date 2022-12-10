/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:53:45 by ruchoa            #+#    #+#             */
/*   Updated: 2022/12/08 20:02:38 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

enum e_size
{
	win_size_x = 1200,
	win_size_y = 800,
	tiny_img_x = 400,
	tiny_img_y = 270,
};

int	main(void)
{
	int	i;
	int	j;

	i = win_size_y / 3;
	printf("i = %i\n", i);
	j = win_size_y / 3;
	printf("i = %i\n", i);
	return (0);
}
