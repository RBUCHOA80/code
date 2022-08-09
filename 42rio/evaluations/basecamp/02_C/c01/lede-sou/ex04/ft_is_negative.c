/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-sou <leonardojose7101@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 02:07:57 by lede-sou          #+#    #+#             */
/*   Updated: 2022/02/10 02:36:50 by lede-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

//int	main(void)
//{
//	ft_is_negative(0);
//	return (0);
//}

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	else if (n < 0)
	{
		write(1, "N", 1);
	}	
}
