/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:52:31 by liperman          #+#    #+#             */
/*   Updated: 2022/07/26 18:08:53 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *control_str, ...);
int	ft_convert(va_list args, char type);
int	ft_putchar(int c);
int	ft_print_str(char *arg);
int	ft_print_int(int arg);
int	ft_print_uint(unsigned int arg);
int	ft_print_percent(void);
int	ft_print_hexa(unsigned int n, char type);
int	ft_print_ptr(unsigned long long ptr);
int	ft_putptr(uintptr_t ptr);

#endif
