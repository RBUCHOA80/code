/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:26:01 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/03 22:36:30 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h> //malloc / free

# include "../libft/libft.h" //libft
# include "../libftprintf/libftprintf.h" //ft_printf
# include "../get_next_line/get_next_line.h" //get_next_line

void	push_swap(int *arr, int	start, int end);

void	ft_merge(int *arr, int start, int mid, int end);
void	ft_merge_sort(int *arr, int start, int end);
void	ft_printf_arr(int *arr, int size);

#endif
