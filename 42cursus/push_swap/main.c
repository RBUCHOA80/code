/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:53:35 by ruchoa            #+#    #+#             */
/*   Updated: 2022/12/05 20:55:07 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	*ft_addint(char *str)
{
	int	*dest;

	if (!str)
		return (NULL);
	dest = (int *)ft_calloc(1, sizeof(*dest));
	if (!dest)
		return (NULL);
	*dest = ft_atoi(str);
	return (dest);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (argc < 2)
		return (1);
	stack_a = NULL;
	stack_b = NULL;
	while (*(++argv))
		ft_lstadd_back(&stack_a, ft_lstnew(ft_addint(*argv)));
	push_swap(&stack_a, &stack_b);
	ft_lstclear(&stack_a, free);
	ft_lstclear(&stack_b, free);
	return (0);
}
