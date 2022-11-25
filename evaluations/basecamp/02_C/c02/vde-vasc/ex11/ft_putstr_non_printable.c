/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:40:26 by coder             #+#    #+#             */
/*   Updated: 2022/04/01 13:40:26 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void show_hex(unsigned int nb)
{
    if (nb >= 16)
    {
        show_hex(nb / 16);
        nb = nb % 16;
    }
    if (nb < 16)
    {
        if (nb < 10)
            ft_putchar(nb + 48);
        else if (nb >= 10)
            ft_putchar(nb + 87);
    }
}

void ft_putstr_non_printable(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if ((str[i] <= 31 && str[i] >= 0) || str[i] == 127)
        {
            write(1, "\\", 1);
            if (str[i] < 16)
                write(1, "0", 1);
            show_hex(str[i]);
        }
        else
            write(1, &str[i], 1);
        i = i + 1;
    }
}

// #include <stdio.h>

// int main(void)
// {
//     char check_nonprintable[] = {31, '\n'};
//     ft_putstr_non_printable(check_nonprintable);
// }