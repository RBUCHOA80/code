/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:30:01 by ruchoa            #+#    #+#             */
/*   Updated: 2022/06/11 23:21:52 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

/* static t_list	*ft_newlst(char *str, char sep);
static void		ft_print_lst(t_list *lst);
static void		ft_del(void *lst);

int	main(void)
{
	t_list	*lst;
	t_list	*temp;
	char	*str;
	char	sep;
	int		i;

	str = "Put your text here.";
	sep = ' ';
	lst = ft_newlst(str, sep);
	temp = lst;
	ft_print_lst(lst);
	i = 0;
	while (temp)
	{
		if (++i == 2)
			ft_lstdelone(temp, ft_del);
		temp = temp->next;
	}
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
