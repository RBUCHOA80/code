/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 21:37:51 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/07 20:58:13 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}

/*#include <stdio.h>
int	main(void)
{
	int i;
	char origin = 75;
	
	printf("%c\n", origin);
	i = ft_tolower(origin);
	printf("%c", i);
	return (0);
}*/
