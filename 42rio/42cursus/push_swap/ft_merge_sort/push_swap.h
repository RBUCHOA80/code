/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 21:35:06 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/03 21:51:57 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libftprintf/libftprintf.h" //ft_printf

#include <stdlib.h> //malloc / free
#include <stdio.h> //printf

void	ft_merge(int *arr, int start, int mid, int end);
void	ft_merge_sort(int *arr, int start, int end);
void	ft_printf_arr(int *arr, int size);
