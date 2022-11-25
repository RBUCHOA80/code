/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:36:26 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/17 20:16:22 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_str_to_list(char **str)
{
	t_list	*list;
	int		*new_content;

	list = NULL;
	while (*str)
	{
		new_content = ft_calloc(1, sizeof(*new_content));
		*new_content = ft_atoi(*str);
		ft_push_base(&list, new_content);
		str++;
	}
	return (list);
}

		// list = ft_calloc(1, sizeof(*list));
