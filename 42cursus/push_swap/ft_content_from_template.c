/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_content_from_template.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 22:07:25 by ruchoa            #+#    #+#             */
/*   Updated: 2023/02/01 22:46:26 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	ft_content_from_template(t_list *stk, int *template)
{
	t_list	*temp;
	int		len;
	int		i;

	if (!(stk && template))
		return ;
	len = ft_lstsize(stk);
	temp = stk;
	while (temp)
	{
		i = 0;
		while (i < len)
		{
			if (*((int *)temp->content) == template[i])
			{
				*((int *)temp->content) = i + 1;
				break ;
			}
			i++;
		}
		temp = temp->next;
	}
	free(template);
	return ;
}
