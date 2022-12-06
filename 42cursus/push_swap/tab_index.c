/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_template.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:19:26 by ruchoa            #+#    #+#             */
/*   Updated: 2022/12/05 21:01:34 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	*tab_index(t_list *stack)
{
	int	*template;
	int	count;

	count = ft_lstsize(stack);
	template = (int *)ft_calloc(count, sizeof(*template));
	if (!template)
		return (NULL);
	count = 0;
	while (stack)
	{
		template[count++] = *((int *)stack->content);
		stack = stack->next;
	}
	ft_bubble_sort(template, count);
	return (template);
}
