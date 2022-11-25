/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 22:31:58 by coder             #+#    #+#             */
/*   Updated: 2022/03/30 22:32:07 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)

{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)

// {
// 	char	test[] = "aba";
// 	char	dest[2];

// 	if (ft_strcpy(dest, test) == strcpy(dest, test))
// 		printf("OK\n");
// 	else
// 		printf("KO\n");
// 	return (0);
// }