/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 21:51:55 by ruchoa            #+#    #+#             */
/*   Updated: 2023/01/01 11:45:44 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../../42cursus/libft/libft.h"

int	main(int argc, char **argv)
{
	int		nbr1;
	int		nbr2;
	int		len;
	char	*str;
	
	if (argc != 2)
		return (1);
	nbr1 = atoi(argv[1]);
	nbr2 = ft_atoi(argv[1]);
	printf("(A)    atoi = %i\n", nbr1);
	printf("(B) ft_atoi = %i\n", nbr2);
	str = ft_itoa(nbr2);
	len = ft_strlen(argv[1]);
	printf("(C) ft_itoa = %s\n", str);
	printf("(D) COMP = %i\n", ft_strncmp(argv[1], str, len));
	return (0);
}
