/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argv_to_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 11:02:38 by ruchoa            #+#    #+#             */
/*   Updated: 2022/12/25 21:37:05 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	ft_argv_to_list(char **argv, t_list **stack)
{
	char	**strs;

	if (!(argv && stack))
		return (0);
	while (*(++argv))
	{
		if (!ft_isvalid_entry(*argv))
		{
			write(1, "Error\n", 6);
			return (0);
		}
		strs = ft_split(*argv, ' ');
		while (*strs)
		{
			ft_printf("\e[1;32m(C)%s\n\e[0m", *strs);
			ft_lstadd_back(stack, ft_lstnew(ft_str_to_int(*strs++)));
		}
	}
	return (1);
}

//./push_swap 1234 4123 6526 7 "235 325235 664 7869"
