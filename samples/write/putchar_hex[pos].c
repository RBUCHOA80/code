/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putchar_hex[pos].c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 02:47:56 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/04 22:03:58 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr_non_printable(char *str);
int        ft_printable(char chars);
void    ft_putchar(char c);

int    main(void)
{
    ft_putstr_non_printable("Ate mais,\n e\a obrigado \rpelos \tpeixes!\v");
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int    ft_printable(char chars)
{
    if (chars >= 32 && chars <= 126)
        return (1);
    else
        return (0);
}

void    ft_putstr_non_printable(char *str)
{
    int    count;

    count = 0;
    while (str[count] != '\0')
    {
        if (ft_printable(str[count]) == 1)
            ft_putchar(str[count]);
        else
        {
            ft_putchar('\\');
            ft_putchar("0123456789abcdef"[str[count] / 16]);
            ft_putchar("0123456789abcdef"[str[count] % 16]);
        }
        count++;
    }
}
