/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:54:34 by ruchoa            #+#    #+#             */
/*   Updated: 2022/06/11 23:21:30 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/* int	main(void)
{
	t_list	**lst;
	char	**strs;
	char	*str;
	char	sep;
	int		i;

	str = "Put your text here.";
	sep = ' ';
	strs = ft_split(str, sep);
	i = 0;
	while (strs[i])
		i++;
	lst = (t_list **)malloc(sizeof(strs) * (i + 1));
	i = 0;
	while (strs[i])
	{
		lst[i] = ft_lstnew(strs[i]);
		if (i)
			lst[i - 1]->next = lst[i];
		i++;
	}
	printf("last = %p \n", ft_lstlast(*lst));
	return (0);
} */
