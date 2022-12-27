/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argv_to_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 11:02:38 by ruchoa            #+#    #+#             */
/*   Updated: 2022/12/26 22:28:20 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	ft_argv_to_list(char **argv, t_list **stack)
{
	char	**strs;

	if (!(argv && stack))
		return (0);
	strs = ft_split(*argv, ' ');
	if (!ft_isvalid_entry(strs))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	while (*(++strs))
		while (*strs)
			ft_lstadd_back(stack, ft_lstnew(ft_str_to_int(*strs++)));
	return (1);
}
