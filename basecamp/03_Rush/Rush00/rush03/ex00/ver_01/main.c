/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <rodrigo.uchoa@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:58:25 by marolive          #+#    #+#             */
/*   Updated: 2022/02/05 21:57:56 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	rush(int x, int y);

int	main(void)
{
	write(1, "-8, -5", 6);
	write(1, "\n", 1);
	rush(-8, -5);
	write(1, "\n", 1);

	write(1, "5, 8", 4);
	write(1, "\n", 1);
	rush(5 , 8);
	write(1, "\n", 1);

	write(1, "0, 0", 4);
	write(1, "\n", 1);
	rush(0 , 0);
	write(1, "\n", 1);

	write(1, "1, 1", 4);
	write(1, "\n", 1);
	rush(1 , 1);
	write(1, "\n", 1);

	write(1, "5, 3", 4);
	write(1, "\n", 1);
	rush(5, 3);
	write(1, "\n", 1);
	
	write(1, "5, 1", 4);
	write(1, "\n", 1);
	rush(5 , 1);
	write(1, "\n", 1);

	write(1, "1, 5", 4);
	write(1, "\n", 1);
	rush(1 , 5);
	write(1, "\n", 1);

	write(1, "4, 4", 4);
	write(1, "\n", 1);
	rush(4 , 4);
	write(1, "\n", 1);
	return (0);
}
