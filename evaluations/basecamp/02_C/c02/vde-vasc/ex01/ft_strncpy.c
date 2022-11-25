/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 22:54:18 by coder             #+#    #+#             */
/*   Updated: 2022/03/30 23:43:15 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)

{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)

// {
// 	char	test[] = "Victor";
// 	char	dest[6];

// 	if (ft_strncpy(dest, test, 2) == strncpy(dest, test, 2))
// 		printf("OK!!!!\n");
// 	else
// 		printf("KO :(\n");
// 	return (0);
// }
