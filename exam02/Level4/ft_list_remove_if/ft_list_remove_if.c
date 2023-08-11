/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 21:27:32 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/10 22:00:47 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //printf
#include <stdlib.h> //malloc

typedef struct s_list
{
	void			*data;
	struct s_list	*next;
}	t_list;

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	(void)begin_list;
	(void)data_ref;
	(void)cmp;
	return ;
}

void	ft_printf_list(t_list *lst)
{
	if (!lst || !lst->data)
		return ;
	while (1)
	{
		printf("%s\n", (char *)lst->data);
		if (lst->next == NULL)
			break ;
		lst = lst->next;
	}
	return ;
}

int		(*cmp)(void *data_ref, void *data_ref2);

int	main(void)
{
	t_list	**begin_list;
	t_list	*nod1;
	t_list	*nod2;
	t_list	*nod3;
	char	*str1;
	char	*str2;
	char	*str3;
	char	*looking;
	void	*data_ref;

	str1 = "Put your sample text 1 here!";
	str2 = "Put your sample text 2 here!";
	str3 = "Put your sample text 3 here!";
	looking = "Put your sample text 2 here!";
	begin_list = malloc(sizeof(t_list *));
	nod1 = malloc(sizeof(t_list));
	nod2 = malloc(sizeof(t_list));
	nod3 = malloc(sizeof(t_list));
	begin_list = &nod1;
	data_ref = looking;
	nod1->data = str1;
	nod2->data = str2;
	nod3->data = str3;
	nod1->next = nod2;
	nod2->next = nod3;
	nod3->next = NULL;
	ft_printf_list(*begin_list);
	ft_list_remove_if(begin_list, data_ref, cmp);
	ft_printf_list(*begin_list);
	return (0);
=======
/*   By: ruchoa <ruchoa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:01:21 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/09 13:13:01 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list == NULL || *begin_list == NULL)
		return ;

	t_list *cur = *begin_list;

	if (cmp(cur->data, data_ref) == 0)
	{
		*begin_list = cur->next;
		free(cur);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	cur = *begin_list;
	ft_list_remove_if(&cur->next, data_ref, cmp);
}

--------------------------------------------------------------------
#include <stdio.h>
#include <string.h>

void	print_list(t_list **begin_list)
{
	t_list *cur = *begin_list;
	while (cur != 0)
	{
		printf("%s\n", cur->data);
		cur = cur->next;
	}
}

int		main(void)
{
	t_list **begin_list;
	t_list *aa;
	t_list *bb;
	t_list *cc;
	t_list *dd;
	char straa[] = "String aa";
	char strbb[] = "String bb";
	char strcc[] = "String cc";
	char strdd[] = "String dd";
	
	aa = malloc(sizeof(t_list));
	aa->next = 0;
	aa->data = straa;

	bb = malloc(sizeof(t_list));
	bb->next = 0;
	bb->data = strbb;

	cc = malloc(sizeof(t_list));
	cc->next = 0;
	cc->data = strcc;

	dd = malloc(sizeof(t_list));
	dd->next = 0;
	dd->data = strdd;

	aa->next = bb;
	bb->next = cc;
	cc->next = dd;

	begin_list = &aa;

	print_list(begin_list);
	printf("----------\n");
	ft_list_remove_if(begin_list, straa, strcmp);
	print_list(begin_list);
>>>>>>> 0c6677a174addcf8699195ad5036651e1edef675
}
