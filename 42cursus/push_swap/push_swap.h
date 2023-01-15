/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:26:01 by ruchoa            #+#    #+#             */
/*   Updated: 2023/01/15 07:31:40 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libftprintf/libftprintf.h" //ft_printf
# include "../libft/libft.h" //libft
# include <fcntl.h> //open

int		ft_argv_to_list(char **argv, t_list **stk);
int		ft_isvalid_entry(char **argv);
int		*ft_str_to_int(char *str);
int		*ft_create_template(t_list *stk);
void	ft_bubble_sort(int *arr, int size);
void	ft_content_from_template(t_list *stk, int *template);

void	push_swap(t_list **stk_a, t_list **stk_b);

void	ft_printf_stks(t_list *stk_a, t_list *stk_b);

void	*ft_lsttake_back(t_list **stk);
void	*ft_lsttake_front(t_list **stk);

void	ft_operation_swap(t_list **stk);
void	sa(t_list **stk_a);
void	sb(t_list **stk_b);
void	ss(t_list **stk_a, t_list **stk_b);

void	ft_operation_rotate(t_list **stk);
void	ra(t_list **stk_a);
void	rb(t_list **stk_b);
void	rr(t_list **stk_a, t_list **stk_b);

void	ft_operation_reverse(t_list **stk);
void	rra(t_list **stk_a);
void	rrb(t_list **stk_b);
void	rrr(t_list **stk_a, t_list **stk_b);

void	ft_operation_push(t_list **stk_a, t_list **stk_b);
void	pa(t_list **stk_b, t_list **stk_a);
void	pb(t_list **stk_a, t_list **stk_b);

#endif
