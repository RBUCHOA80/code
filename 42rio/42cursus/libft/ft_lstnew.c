/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 11:30:05 by ruchoa            #+#    #+#             */
/*   Updated: 2022/06/11 23:21:21 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->content = (char *)content;
	list->next = NULL;
	return (list);
}

/* int	main(void)
{
	t_list	*lst;
	char	*str;
	char	**strs;
	char	sep;
	int		i;

	str = "Put your text here.";
	sep = ' ';
	strs = ft_split(str, sep);
	i = 0;
	while (strs[i])
	{
		lst = ft_lstnew(strs[i]);
		printf("Node[%i]* | addr: %p | content: %s\t| next: %p\n", \
				i, lst, (char *)lst->content, lst->next);
		i++;
	}
	return (0);
} */
