/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 21:51:55 by ruchoa            #+#    #+#             */
/*   Updated: 2022/12/24 19:48:26 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "../../42cursus/libft/libft.h"

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("   atoi = %i\n", atoi(argv[1]));
	printf("ft_atoi = %i\n", ft_atoi(argv[1]));
	return (0);
}
