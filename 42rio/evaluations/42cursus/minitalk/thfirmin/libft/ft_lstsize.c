/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:57:07 by ruchoa            #+#    #+#             */
/*   Updated: 2022/06/11 23:21:17 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst)
	{
		lst = lst->next;
		len++;
	}
	return (len);
}

/* static t_list	*ft_newlst(char *str, char sep);
static void		ft_print_lst(t_list *lst);

int	main(void)
{
	t_list	*lst;
	char	*str;
	char	sep;
	int		size;

	str = "Put your text here.";
	sep = ' ';
	lst = ft_newlst(str, sep);
	ft_print_lst(lst);
	size = ft_lstsize(lst);
	printf("TOTAL lst.size = %i Nodes \n", size);
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
