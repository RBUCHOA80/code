/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimachad <fimachad@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:41:32 by fimachad          #+#    #+#             */
/*   Updated: 2021/12/13 13:41:33 by fimachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	*ft_print_memory(void *addr, unsigned int size)
{
	addr = '4';
	write(1, &addr, 1);
	size = size + 48;
	write(1, &size, 1);
	return (addr);
}

// int	main(void)
// {
// 	ft_putstr_non_printable('4', 2);
// 	return (0);
// }
