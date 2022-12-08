/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmenezes <cmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 06:53:02 by cmenezes          #+#    #+#             */
/*   Updated: 2022/09/10 19:41:38 by cmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

int	ft_putuint(unsigned int n)
{
	unsigned int	nr;
	int				ret;

	nr = n;
	ret = 0;
	if (nr >= 10)
		ret += ft_putuint(nr / 10);
	ret += ft_putchar(nr % 10 + '0');
	return (ret);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ch;
	int		n;

	i = 0;
	ch = (char *)s;
	n = ft_strlen(ch);
	while (((unsigned char) c != ch[0]) && (i < n))
	{
		ch++;
		i++;
	}
	if (ch[0] == (unsigned char)c)
	{
		return ((char *) ch);
	}
	return (NULL);
}

int	ft_printfarg(const char *fmt, va_list arg, int i)
{
	int	ret;

	ret = 0;
	if (fmt[i] == '%')
		ret += (ft_putchar(fmt[i]));
	else if (fmt[i] == 'c')
		ret += (ft_putchar(va_arg(arg, int)));
	else if (fmt[i] == 's')
		ret += (ft_putstr(va_arg(arg, char *)));
	else if (fmt[i] == 'd' || fmt[i] == 'i')
		ret += (ft_putintnbr(va_arg(arg, int)));
	else if (fmt[i] == 'u')
		ret += (ft_putuint(va_arg(arg, unsigned int)));
	else if (fmt[i] == 'x' || fmt[i] == 'X')
		ret += ft_dectohex(va_arg(arg, unsigned int), fmt[i]);
	else if (fmt[i] == 'p')
		ret += (ft_putstr("0x") + \
				ft_dectohex(va_arg(arg, unsigned long), 'x'));
	return (ret);
}

int	ft_printf(const char *type, ...)
{
	va_list	args;
	int		i;
	int		ret;

	i = 0;
	ret = 0;
	va_start(args, type);
	while (type[i])
	{
		if (type[i] == '%' && ft_strchr("cspdiuxX%", type[i + 1]))
			ret += ft_printfarg(type, args, ++i);
		else
			ret += ft_putchar(type[i]);
		i++;
	}
	va_end(args);
	return (ret);
}

/*int main()
{
	int ch;
	ch = 65;

	printf("%d\n",ft_printf(" %c ", ch)); // para %c
    printf("\n\n");

	printf("%d",ft_printf("%%")); // para %%
    printf("\n\n");

	ft_printf(" NULL %s NULL ", NULL);
    printf("\n\n");

    printf("%d",ft_printf("%i",1000)); // para %i ou %d
    printf("\n\n");

    printf("%d",ft_printf("%u",15));
	printf("\n\n");

	printf("%d",ft_printf("%X",1706959));
   	printf("\n\n");

	printf("%d",ft_printf(" %p ", -1));
	printf("\n\n"); 
	printf(" %u ", -1);

}*/
