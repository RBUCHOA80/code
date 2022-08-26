/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf_bonus.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 20:13:09 by cnascime          #+#    #+#             */
/*   Updated: 2022/08/26 20:09:11 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_BONUS_H
# define LIBFTPRINTF_BONUS_H

# include "libft/libft.h"
# include "libftprintf.h"

typedef struct s_flags
{
	int		dash;
	int		zero;
	int		hash;
	int		plus;
	int		space;
	int		i;
	int		minwidth;
	int		precision;
	va_list	argument;
}	t_flags;

int		ft_printf(const char *fixed, ...);
void	lowerflags(t_flags *flags);
void	raiseflags(const char *expression, t_flags *flags);
void	treatflags(const char *exp, int *places, t_flags *flags);
void	treatspecs(const char *exp, int *count, t_flags *flags);
int		ft_atoiforprintf(const char *str);
// void	ft_isnegativeforprintf(int number, t_flags *flags);
void	counter(const char *exp, t_flags *flags);
void	flagcounter(const char *exp, t_flags *flags);
void	padding(int *count, t_flags *flags);
void	sign(const char *exp, int *count, t_flags *flags);
void	precision(const char *exp, int *count, t_flags *flags);
#endif
