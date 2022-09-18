/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:43:41 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/17 19:45:43 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //printf
#include <unistd.h> //write
#include <stdlib.h> //malloc

void	ft_prinft_arr(int *nbr, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		printf("%p ", &nbr[i]);
		printf("nbr[%i] = ", i);
		printf("%i\n", nbr[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	*nbr;
	int	len;
	int	i;

	len = (argc - 1);
	nbr = malloc(len * sizeof(*nbr));
	i = 0;
	while (i < len)
	{
		nbr[i] = atoi(argv[i + 1]);
		i++;
	}
	ft_prinft_arr(nbr, len);
	free(nbr);
	return (0);
}

/* int	main(void)
{
	int	p_nbr[] = {113, 3, 346, 7, 0, -41, 685, 765};
	int	len;
	int	i;

	len = sizeof(p_nbr) / sizeof(*p_nbr);
	i = 0;
	while (i < len)
	{
		printf("%p ", &p_nbr[i]);
		printf("p_nbr[%i] = ", i);
		printf("%i\n", p_nbr[i]);
		i++;
	}
	return (0);
} */
