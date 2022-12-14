/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 01:08:23 by ruchoa            #+#    #+#             */
/*   Updated: 2022/11/04 19:47:53 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst && new)
		ft_lstlast(*lst)->next = new;
	else if (new)
		*lst = new;
}

/* #include <stdio.h>

static t_list	*ft_newlst(char *str, char sep);
static void		ft_print_lst(t_list *lst);

int	main(void)
{
	t_list	*lst;
	t_list	*new;
	char	*str;
	char	sep;
	char	*new_content;

	str = "Put your text here";
	sep = ' ';
	lst = ft_newlst(str, sep);
	ft_print_lst(lst);
	new_content = "Back";
	new = ft_lstnew(new_content);
	ft_print_lst(new);
	ft_lstadd_back(&lst, new);
	ft_print_lst(lst);
	return (0);
}

static t_list	*ft_newlst(char *str, char sep)
{
	t_list	*lst;
	char	**strs;
	int		i;

	strs = ft_split(str, sep);
	i = 0;
	while (strs[i])
		i++;
	lst = (t_list *)malloc(sizeof(strs) * (i + 1));
	i = 0;
	while (strs[i])
	{
		lst[i] = *ft_lstnew(strs[i]);
		if (i)
			lst[i - 1].next = &lst[i];
		i++;
	}
	return (lst);
}

static void	ft_print_lst(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		printf("Node[%i] | ", i);
		printf("addr: %p | ", lst);
		printf("content: %s \t| ", (char *)lst->content);
		printf("next: %p", lst->next);
		printf("\n");
		lst = lst->next;
		i++;
	}
	printf("\n");
} */
