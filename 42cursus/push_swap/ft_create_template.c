/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_template.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:19:26 by ruchoa            #+#    #+#             */
/*   Updated: 2023/01/15 07:31:40 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	*ft_create_template(t_list *stk)
{
	int	*template;
	int	count;

	if (!stk)
		return (NULL);
	count = ft_lstsize(stk);
	template = (int *)ft_calloc(count, sizeof(*template));
	if (!template)
		return (NULL);
	count = 0;
	while (stk)
	{
		template[count++] = *((int *)stk->content);
		stk = stk->next;
	}
	ft_bubble_sort(template, count);
	return (template);
}
