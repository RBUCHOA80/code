/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioda-si <dioda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 10:22:30 by dioda-si          #+#    #+#             */
/*   Updated: 2022/08/16 17:42:40 by dioda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
char	*ft_strchr(const char *str, int c);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
char	*ft_itoa(int n);
int		ft_unsigned(unsigned int n);
int		ft_hex(unsigned int n, char str);
int		ft_0x(void);
int		ft_pointer(unsigned long int n);

#endif
