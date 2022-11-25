/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:26:01 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/18 19:50:59 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <fcntl.h> // open | close
# include <stdlib.h> //malloc / free

# include "../libft/libft.h" //libft
# include "../libftprintf/libftprintf.h" //ft_printf
# include "../get_next_line/get_next_line.h" //get_next_line

/* 
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
 */

void	ft_printf_list(t_list *list);

t_list	*ft_str_to_list(char **str);
t_list	*ft_last_node(t_list *list);

void	*ft_pop_base(t_list **list);
void	*ft_pop_top(t_list **list);

void	ft_push_base(t_list **list, void *content);
void	ft_push_top(t_list **list, void *content);

void	ft_operation_swap(t_list **list);
void	sa(t_list **list_a);
void	sb(t_list **list_b);
void	ss(t_list **list_a, t_list **list_b);

void	ft_operation_rotate(t_list **list);
void	ra(t_list **list_a);
void	rb(t_list **list_b);
void	rr(t_list **list_a, t_list **list_b);

void	ft_operation_reverse(t_list **list);
void	rra(t_list **list_a);
void	rrb(t_list **list_b);
void	rrr(t_list **list_a, t_list **list_b);

void	ft_operation_push(t_list **list_a, t_list **list_b);
void	pa(t_list **list_b, t_list **list_a);
void	pb(t_list **list_a, t_list **list_b);

#endif
