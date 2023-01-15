/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_content_from_template.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 22:07:25 by ruchoa            #+#    #+#             */
/*   Updated: 2023/01/15 07:31:40 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	ft_content_from_template(t_list *stk, int *template)
{
	int	i;

	if (!(stk && template))
		return ;
	while (stk)
	{
		i = 0;
		while (template[i])
		{
			if (*((int *)stk->content) == template[i])
			{
				*((int *)stk->content) = i + 1;
				break ;
			}
			i++;
		}
		stk = stk->next;
	}
	free(template);
	return ;
}
