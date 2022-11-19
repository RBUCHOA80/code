/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorette <amorette@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 16:26:11 by amorette          #+#    #+#             */
/*   Updated: 2022/06/16 10:31:45 by amorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/* #include <stdio.h>
#include <ctype.h>
int	main(void)
{
	int c = 97;
	printf("toupper: \t%c\n", (char)toupper(c));
	printf("ft_toupper: \t%c\n", (char)ft_toupper(c));
	return (0);
} */
/* Call it:
* gcc -Wall -Wextra -Werror ft_toupper.c && ./a.out */
