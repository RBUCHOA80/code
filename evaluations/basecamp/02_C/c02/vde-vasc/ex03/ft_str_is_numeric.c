/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 12:32:42 by coder             #+#    #+#             */
/*   Updated: 2022/04/01 12:32:42 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)

{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int    main(void)
// {
//     printf("%d\n", ft_str_is_numeric("123456"));
//     printf("%d\n", ft_str_is_numeric(""));
//     printf("%d\n", ft_str_is_numeric("AsBfD"));
//     printf("%d\n", ft_str_is_numeric("333"));
//     printf("%d\n", ft_str_is_numeric("cf\ndezp"));
//     printf("%d\n", ft_str_is_numeric("af3vb"));
// }