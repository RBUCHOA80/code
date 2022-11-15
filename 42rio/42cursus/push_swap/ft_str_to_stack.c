/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:46:01 by ruchoa            #+#    #+#             */
/*   Updated: 2022/11/15 19:11:46 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_str_to_stack(char **str)
{
	t_stack	*stack;
	int		count;
	int		i;

	if (!str)
		return (NULL);
	count = 0;
	while (str[count])
		count++;
	stack = ft_calloc(count, sizeof(*stack));
	if (!stack)
		return (NULL);
	i = 0;
	while (str[i])
	{
		stack[i].content = ft_atoi(str[i]);
		if (i)
			stack[i - 1].next = &stack[i];
		i++;
	}
	return (stack);
}
