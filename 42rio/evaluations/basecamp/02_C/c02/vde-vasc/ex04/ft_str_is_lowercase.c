/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 12:47:22 by coder             #+#    #+#             */
/*   Updated: 2022/04/01 12:47:22 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int    main(void)
// {
//     printf("%d\n", ft_str_is_lowercase("123456"));
//     printf("%d\n", ft_str_is_lowercase(""));
//     printf("%d\n", ft_str_is_lowercase("AsBfD"));
//     printf("%d\n", ft_str_is_lowercase("abcd"));
//     printf("%d\n", ft_str_is_lowercase("cf\ndezp"));
//     printf("%d\n", ft_str_is_lowercase("af3vb"));
// }