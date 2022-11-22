/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gabarito.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:59:40 by ruchoa            #+#    #+#             */
/*   Updated: 2022/11/21 22:14:08 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	*ft_addint(char *str)
{
	int	*dest;

	if (!str)
		return (NULL);
	dest = (int *)ft_calloc(1, sizeof(*dest));
	if (!dest)
		return (NULL);
	*dest = ft_atoi(str);
	return (dest);
}

t_list	ft_gabarito(t_list *stack, char *str)
{
	t_list	*temp;
	int		i;

	temp = stack;
	while (stack->next)
	{
		i = 0;
		while (str[i])
		{
			if (stack->content == ft_atoi(str[i]))
			{
				*((int *)stack->content) = i;
				break ;
			}
			i++;
		}
		stack = stack->next;
	}
	return (*temp);
}
