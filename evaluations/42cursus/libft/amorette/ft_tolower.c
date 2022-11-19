/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorette <amorette@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 16:53:30 by amorette          #+#    #+#             */
/*   Updated: 2022/06/16 10:31:38 by amorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/* #include <stdio.h>
#include <ctype.h>
int	main(void)
{
	int c = 'D';
	printf("tolower: \t%c\n", (char)tolower(c));
	printf("ft_tolower: \t%c\n", (char)ft_tolower(c));
	return (0);
} */
/* Call it:
* gcc -Wall -Wextra -Werror ft_tolower.c && ./a.out */
