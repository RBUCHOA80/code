/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:26:01 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/17 20:35:55 by ruchoa           ###   ########.fr       */
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

void	ft_free_str(char **str);
int		ft_list_len(t_list *list);
void	ft_printf_list(t_list *list);
t_list	*ft_str_to_list(char **str);

void	ft_o_swap(t_list **list);
void	sa(t_list **list_a);
void	sb(t_list **list_b);
void	ss(t_list **list_a, t_list **list_b);

#endif
