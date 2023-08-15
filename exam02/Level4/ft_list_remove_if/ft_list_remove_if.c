/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 21:27:32 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/12 22:28:53 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //printf
#include <stdlib.h> //malloc
#include <string.h> //strcpm

typedef struct s_list
{
	void			*data;
	struct s_list	*next;
}	t_list;

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*current;
	t_list	*temp;

	current = (*begin_list);
	while (current)
	{
		if (!cmp(data_ref, (*begin_list)->data))
			(*begin_list) = (*begin_list)->next;
		else if (!cmp(data_ref, current->data))
			temp->next = current->next;
		temp = current;
		current = current->next;
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
	printf("\n");
	return ;
}

int	main(void)
{
	t_list	**begin_list;
	t_list	*nod1;
	t_list	*nod2;
	t_list	*nod3;
	t_list	*nod4;

	nod1 = malloc(sizeof(t_list));
	nod2 = malloc(sizeof(t_list));
	nod3 = malloc(sizeof(t_list));
	nod4 = malloc(sizeof(t_list));
	begin_list = &nod1;
	nod1->data = "Put";
	nod2->data = "your";
	nod3->data = "sample";
	nod4->data = "text";
	nod1->next = nod2;
	nod2->next = nod3;
	nod3->next = nod4;
	nod4->next = NULL;
	ft_printf_list(*begin_list);
	ft_list_remove_if(begin_list, "your", strcmp);
	ft_printf_list(*begin_list);
	return (0);
}
