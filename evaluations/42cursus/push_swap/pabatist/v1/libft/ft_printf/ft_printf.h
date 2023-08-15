/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabatist <pabatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:21:29 by pabatist          #+#    #+#             */
/*   Updated: 2023/08/14 16:21:30 by pabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int		ft_printf(const char *s, ...);

int		is_type(char c);

int		choose_type(char c, va_list ap);

int		string_output(va_list ap);

int		char_output(va_list ap);

int		integer_output(va_list ap);

int		pointer_output(va_list ap);

int		unsigned_decimal_output(va_list ap);

int		hexadecimal_uppercase_output(va_list ap);

int		hexadecimal_lowercase_output(va_list ap);

int		percent_output(void);

void	ft_putnbr_hexadecimal_lowercase_fd(unsigned long int n, int fd);

void	ft_putnbr_hexadecimal_uppercase_fd(unsigned long int n, int fd);

void	ft_putpointer_hex(unsigned long int n, int fd);

int		count_decimal(long long number);

int		count_hexa(long long unsigned number);

#endif
