/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 18:51:02 by coder             #+#    #+#             */
/*   Updated: 2022/04/05 18:51:02 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int	main(void)
{
	ft_putstr("F**a-se se a Britney Spears ta gravida de um cavalo");
	ft_putchar('\n');
	return (0);	
}

// int	main(int argc, char **argv)
// {
// 	ft_putstr(argv[argc - 1]);
// 	ft_putchar('\n');
// 	return (0);
// }
