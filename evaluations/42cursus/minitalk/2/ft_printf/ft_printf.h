/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmenezes <cmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 22:01:03 by cmenezes          #+#    #+#             */
/*   Updated: 2022/09/10 19:39:51 by cmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

size_t	ft_strlen(const char *ch);
int		ft_dectohex(unsigned long numb, char type);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putintnbr(int n);
int		ft_printf(const char *type, ...);
int		ft_putuint(unsigned int n);
char	*ft_strchr(const char *s, int c);
int		ft_printfarg(const char *fmt, va_list arg, int i);

#endif
