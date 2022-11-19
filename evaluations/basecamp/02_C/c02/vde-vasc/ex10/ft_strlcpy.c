/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:40:02 by coder             #+#    #+#             */
/*   Updated: 2022/04/01 13:40:12 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int    a;
    unsigned int    counter;

    counter = 0;
    while (src[counter] != '\0')
    {
        counter++;
    }
    if (size == 0)
    {
        return (counter);
    }
    a = 0;
    while (src[a] != '\0' && a < (size - 1))
    {
        dest[a] = src[a];
        a++;
    }
    while (a < size)
    {
        dest[a] = '\0';
        a++;
    }
    return (counter);
}