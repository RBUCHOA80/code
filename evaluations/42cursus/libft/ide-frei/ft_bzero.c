/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-frei <ide-frei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:32:05 by ide-frei          #+#    #+#             */
/*   Updated: 2022/05/12 18:46:39 by ide-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	int				i;

	i = 0;
	ptr = s;
	while (n > 0)
	{
		ptr[i] = 0;
		i++;
		n--;
	}
}

/*#include <stdio.h>
int main(void)
{
	char str[] = "avadakedavra";
	int i = 0;

	ft_bzero(str, 5);

	while (str[i])
	{
		printf("%c", str[i]);
		i++;
	}
	return (0);
}*/
