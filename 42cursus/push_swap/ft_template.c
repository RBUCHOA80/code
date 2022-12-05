/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_template.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:19:26 by ruchoa            #+#    #+#             */
/*   Updated: 2022/12/05 20:27:23 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	*ft_template(t_list *stack)
{
	int	*template;
	int	count;

	count = ft_lst_size(stack);
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
