/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argv_to_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 11:02:38 by ruchoa            #+#    #+#             */
/*   Updated: 2022/12/31 19:25:02 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	ft_argv_to_list(char **argv, t_list **stack)
{
	char	**strs;

	if (!(argv && stack))
		return (0);
	strs = ft_split(*++argv, ' ');
	if (!(strs || ft_isvalid_entry(strs)))
	{
		write(1, "[Error #2]\n", 11);
		return (0);
	}
	while (*(++strs))
		while (*strs)
			ft_lstadd_back(stack, ft_lstnew(ft_str_to_int(*strs++)));
	return (1);
}
