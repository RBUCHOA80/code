/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 21:02:41 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/07 20:58:45 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

/*#include <stdio.h>
int	main(void)
{
	int i;
	char origin = 120;
	
	printf("%c\n", origin);
	i = ft_toupper(origin);
	printf("%c", i);
	return (0);
}*/
