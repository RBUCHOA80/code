/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:26:01 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/13 23:42:16 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h> //malloc / free

# include "../libft/libft.h" //libft
# include "../libftprintf/libftprintf.h" //ft_printf
# include "../get_next_line/get_next_line.h" //get_next_line

typedef struct	s_stack
{
	int				content;
	struct s_stack	*next;
}	t_stack;

#endif
