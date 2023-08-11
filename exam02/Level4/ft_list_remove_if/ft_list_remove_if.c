/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 21:27:32 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/11 20:16:10 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //printf
#include <stdlib.h> //malloc | free
#include <string.h> //strcpm

typedef struct s_list
{
	void			*data;
	struct s_list	*next;
}	t_list;

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*temp;

	if (!begin_list || !*begin_list)
		return ;
	while ((*begin_list)->next)
	{
		if (cmp(data_ref, (*begin_list)->data))
		{
			temp = (*begin_list);
			(*begin_list) = (*begin_list)->data;
			free(temp);
		}
		(*begin_list) = (*begin_list)->next;
	}
	return ;
}

void	ft_printf_list(t_list *lst)
{
	int	i;

	if (!lst || !lst->data)
		return ;
	i = 0;
	while (1)
	{
		printf("node[%i]=%s\n", i++, (char *)lst->data);
		if (lst->next == NULL)
			break ;
		lst = lst->next;
	}
	return ;
}

int	main(void)
{
	t_list	**begin_list;
	t_list	*nod1;
	t_list	*nod2;
	t_list	*nod3;
	char	*str1;
	char	*str2;
	char	*str3;

	str1 = "Put your";
	str2 = "sample text";
	str3 = "inside here!";
	nod1 = malloc(sizeof(t_list));
	nod2 = malloc(sizeof(t_list));
	nod3 = malloc(sizeof(t_list));
	begin_list = &nod1;
	nod1->data = str1;
	nod2->data = str2;
	nod3->data = str3;
	nod1->next = nod2;
	nod2->next = nod3;
	nod3->next = NULL;
	ft_printf_list(*begin_list);
	ft_list_remove_if(begin_list, "asdf", strcmp);
	ft_printf_list(*begin_list);
	return (0);
}
