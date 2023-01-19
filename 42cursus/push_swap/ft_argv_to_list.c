/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argv_to_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 11:02:38 by ruchoa            #+#    #+#             */
/*   Updated: 2023/01/18 22:11:15 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	ft_argv_to_list(char **argv, t_list **stk)
{
	if (!(argv && stk && ft_isvalid_entry(argv)))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	while (*(++argv))
		ft_lstadd_back(stk, ft_lstnew(ft_str_to_int(*argv)));
	return (1);
}
