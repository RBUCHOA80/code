/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entry.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 07:31:48 by ruchoa            #+#    #+#             */
/*   Updated: 2022/12/20 07:36:54 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define VALID 0
#define INVALID 1

int	entry(char **argv)
{
	int	i;

	i = 0;
	while (*argv[1])
	{
		/* code */
	}
	
	return (VALID);
	return (INVALID);
}

int	main(int argc, char **argv)
{
	int	ret;

	ret = entry(argv);
	return (0);
}
