/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:33:14 by ruchoa            #+#    #+#             */
/*   Updated: 2022/07/26 22:15:00 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define BASE_DEC 10
# define BASE_HEX 16

# if __APPLE__
#  define PTR_ERROR "0x0"
#  define STR_ERROR "(null)"
# elif __unix__
#  define PTR_ERROR "(nil)"
#  define STR_ERROR "(null)"
# else
#  define PTR_ERROR "(null)"
#  define STR_ERROR "(null)"
# endif

# include <stdarg.h> //va_arg
# include <unistd.h> //write

int		ft_printf(const char *str, ...);

int		character_output(va_list var, int fd);
int		decimal_output(va_list var, int fd);
int		hexadecimal_lower_output(va_list var, int fd);
int		hexadecimal_upper_output(va_list var, int fd);
int		integer_output(va_list var, int fd);
int		pointer_output(va_list var, int fd);
int		string_output(va_list var, int fd);
int		unsigned_integer_output(va_list var, int fd);

void	ft_put_u_nbr_fd(unsigned int n, int fd);
void	ft_puthex_fd(unsigned long long nb, int fd);
void	ft_puthex_low_fd(unsigned int nb, int fd);
void	ft_puthex_upper_fd(unsigned int nb, int fd);
void	ft_putnbr_fd(int n, int fd);

int		ft_count(long nbr, int base);
size_t	ft_strlength(const char *s);

#endif
