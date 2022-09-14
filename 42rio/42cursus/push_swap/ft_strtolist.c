/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolist.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:46:01 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/14 17:46:17 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_strtolist(char **str)
{
	t_stack	*list;
	int		count;
	int		i;

	count = 0;
	while (str[count])
		count++;
	list = ft_calloc(count, sizeof(*list));
	if (!list)
		return (NULL);
	i = 0;
	while (str[i])
	{
		list[i].content = ft_atoi(str[i]);
		if (i)
			list[i - 1].next = &list[i];
		i++;
	}
	return (list);
}
