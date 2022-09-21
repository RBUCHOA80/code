/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 21:32:44 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/20 20:32:25 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* #include <stdio.h>

static t_list	*ft_newlst(char *str, char sep);
static void		ft_print_lst(t_list *lst);
static void		ft_setcontent(void *lst);

int	main(void)
{
	t_list	*lst;
	t_list	*temp;
	char	*str;
	char	sep;

	str = "Put your text here.";
	sep = ' ';
	lst = ft_newlst(str, sep);
	temp = lst;
	ft_print_lst(lst);
	while (temp)
	{
		ft_lstiter(temp, ft_setcontent);
		temp = temp->next;
	}
	ft_print_lst(lst);
	return (0);
}

static void	ft_setcontent(void *lst)
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
