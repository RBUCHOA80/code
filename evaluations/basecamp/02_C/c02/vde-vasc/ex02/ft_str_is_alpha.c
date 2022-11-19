/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 23:47:22 by coder             #+#    #+#             */
/*   Updated: 2022/04/01 12:45:04 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int    main(void)
// {
//     printf("%d\n", ft_str_is_alpha("123456"));
//     printf("%d\n", ft_str_is_alpha(""));
//     printf("%d\n", ft_str_is_alpha("AsBfD"));
//     printf("%d\n", ft_str_is_alpha("ASfD"));
//     printf("%d\n", ft_str_is_alpha("cf\ndezp"));
//     printf("%d\n", ft_str_is_alpha("af3vb"));
// }