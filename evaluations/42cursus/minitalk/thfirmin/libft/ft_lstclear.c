/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:26:08 by ruchoa            #+#    #+#             */
/*   Updated: 2022/06/11 23:21:59 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !*lst || !del)
		return ;
	while (lst && *lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, *del);
		*lst = temp;
	}
	*lst = NULL;
}

/* static t_list	*ft_newlst(char *str, char sep);
static void		ft_print_lst(t_list *lst);
static void		ft_del(void *lst);

int	main(void)
{
	t_list	*lst;
	char	*str;
	char	sep;

	str = "Put your text here.";
	sep = ' ';
	lst = ft_newlst(str, sep);
	ft_print_lst(lst);
	ft_lstclear(&lst, ft_del);
	ft_print_lst(lst);
	return (0);
}

static void	ft_del(void *lst)
{
	int	len;

	len = ft_strlen(lst);
	ft_memset(lst, '-', len);
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
