/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 12:54:17 by coder             #+#    #+#             */
/*   Updated: 2022/04/01 12:54:17 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 31 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int    main(void)
// {
//     printf("%d\n", ft_str_is_printable("123456"));
//     printf("%d\n", ft_str_is_printable(""));
//     printf("%d\n", ft_str_is_printable("AsBfD"));
//     printf("%d\n", ft_str_is_printable("ASfD"));
//     printf("%d\n", ft_str_is_printable("cf\ndezp"));
//     printf("%d\n", ft_str_is_printable("af3vb"));
// }