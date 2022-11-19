/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 15:11:17 by ruchoa            #+#    #+#             */
/*   Updated: 2022/06/11 23:22:05 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/* static t_list	*ft_newlst(char *str, char sep);
static void		ft_print_lst(t_list *lst);

int	main(void)
{
	t_list	*lst;
	t_list	*new;
	char	*str;
	char	sep;
	char	*new_content;

	str = "Put your text here.";
	sep = ' ';
	lst = ft_newlst(str, sep);
	ft_print_lst(lst);
	new_content = "Front";
	new = ft_lstnew(new_content);
	ft_print_lst(new);
	ft_lstadd_front(&lst, new);
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
		printf("Node[%i] | addr: %p | content: %s\t| next: %p\n", \
				i, lst, (char *)lst->content, lst->next);
		lst = lst->next;
		i++;
	}
	printf("\n");
} */
