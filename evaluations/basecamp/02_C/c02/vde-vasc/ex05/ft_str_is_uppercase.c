/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 12:51:13 by coder             #+#    #+#             */
/*   Updated: 2022/04/01 12:51:13 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int    main(void)
// {
//     printf("%d\n", ft_str_is_uppercase("123456"));
//     printf("%d\n", ft_str_is_uppercase(""));
//     printf("%d\n", ft_str_is_uppercase("SADASDSA"));
//     printf("%d\n", ft_str_is_uppercase("ABCDSDSASS"));
//     printf("%d\n", ft_str_is_uppercase("cf\ndezp"));
//     printf("%d\n", ft_str_is_uppercase("ASssssA"));
// }