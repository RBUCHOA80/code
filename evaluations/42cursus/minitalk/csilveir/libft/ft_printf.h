/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilveir <csilveir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 09:05:16 by csilveir          #+#    #+#             */
/*   Updated: 2022/06/24 08:22:10 by csilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_define(char type, va_list list);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putptr(unsigned long n);
int		ft_puthex(unsigned int n, char type);
int		ft_putlongdec(unsigned int n);
int		ft_putdec(int n);

#endif
