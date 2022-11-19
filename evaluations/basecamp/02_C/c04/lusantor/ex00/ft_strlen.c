/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 18:50:40 by coder             #+#    #+#             */
/*   Updated: 2022/04/05 18:50:40 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++ != '\0')
		len++;
	return (len);
}

// int	main(int argc, char **argv)
// {
// 	printf("A String tem %d caracteres\n",
// 		ft_strlen("Escreva aqui sua string")
// 		);
// }

// int	main(int argc, char **argv)
// {
// 	printf("A String tem %d caracteres\n",
// 		ft_strlen(argv[argc - 1]));
// }
