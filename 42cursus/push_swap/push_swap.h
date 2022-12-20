/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:26:01 by ruchoa            #+#    #+#             */
/*   Updated: 2022/12/19 19:47:21 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libftprintf/libftprintf.h" //ft_printf
# include "../libft/libft.h" //libft
# include <fcntl.h> //open

void	push_swap(t_list **stack_a, t_list **stack_b);
int		ft_search_index(t_list *stack, int index);

void	ft_content2index(t_list *stack, int *template);
int		*ft_create_template(t_list *stack);
void	ft_bubble_sort(int *arr, int size);

int		*ft_str2int(char *str);

void	ft_printf_stacks(t_list *stack_a, t_list *stack_b);

void	*ft_lsttake_back(t_list **stack);
void	*ft_lsttake_front(t_list **stack);

void	ft_operation_swap(t_list **stack);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);

void	ft_operation_rotate(t_list **stack);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);

void	ft_operation_reverse(t_list **stack);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);

void	ft_operation_push(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_b, t_list **stack_a);
void	pb(t_list **stack_a, t_list **stack_b);

#endif
