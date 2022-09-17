/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:48:16 by jmenezes          #+#    #+#             */
/*   Updated: 2022/09/17 15:05:38 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "conversion.h"
#include <stdint.h>
#include <stdlib.h>

# if __APPLE__
#  define STR_ERROR "(null)"
#  define PTR_ERROR "0x0"
# elif __unix__
#  define STR_ERROR "(null)"
#  define PTR_ERROR "(nil)"
# else
#  define STR_ERROR "(null)"
#  define PTR_ERROR "(null)"
# endif

int    convert_ptr(t_conversion *conv, uintptr_t p)
{
    char    *digits;
    int        convlen;
    int        nbrlen;
    int        spacescnt;

    if (p == 0)
        return ((int)ft_putstr(PTR_ERROR));
    digits = ft_ptoa_base(p, BASESET_HEXL);
    if (digits == NULL)
        return (-1);
    nbrlen = (int)ft_strlen(digits) + 2;
    spacescnt = 0;
    if (conv->min_width > nbrlen)
        spacescnt = conv->min_width - nbrlen;
    convlen = 0;
    if (!conv->flag_minus)
        convlen += (int)ft_putnchars(' ', spacescnt);
    convlen += (int)ft_putstr("0x");
    convlen += (int)ft_putstr(digits);
    free(digits);
    if (conv->flag_minus)
        convlen += (int)ft_putnchars(' ', spacescnt);
    return (convlen);
}

int	convert_ptr(t_conversion *conv, uintptr_t p)
{
	char	*digits;
	int		convlen;
	int		nbrlen;
	int		spacescnt;

	digits = ft_ptoa_base(p, BASESET_HEXL);
	if (digits == NULL)
		return (-1);
	nbrlen = (int)ft_strlen(digits) + 2;
	spacescnt = 0;
	if (conv->min_width > nbrlen)
		spacescnt = conv->min_width - nbrlen;
	convlen = 0;
	if (!conv->flag_minus)
		convlen += (int)ft_putnchars(' ', spacescnt);
	convlen += (int)ft_putstr("0x");
	convlen += (int)ft_putstr(digits);
	free(digits);
	if (conv->flag_minus)
		convlen += (int)ft_putnchars(' ', spacescnt);
	return (convlen);
}
