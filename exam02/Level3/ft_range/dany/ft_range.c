/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 20:28:37 by ruchoa            #+#    #+#             */
/*   Updated: 2023/03/21 20:36:10 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h> //INT_MAX | INT_MIN
#include <stdlib.h> //malloc
#include <stdio.h>  //printf
#include <unistd.h>

//- With (1, 3) you will return an array containing 1, 2 and 3.
//- With (-1, 2) you will return an array containing -1, 0, 1 and 2.

int *ft_range(int start, int  end)
{
        int *temp;
        unsigned int len;

        if(end > start)
                len = end - start;
        else
                len = start - end;
        temp = malloc(sizeof(int) * len + 1);

        if(temp == NULL)
                return NULL;
        while (len >= 0)
        {
                temp[len] = end;
                if (start > end)
                        end++;
                else
                        end--;
                len--;
        }
        return (temp);
}

// 2147483647 - (-1) = 2147483648 <=> -2147483648

int    main(void)
{
    int    *teste;
    int    i;
    int    start;
    int    end;

    start = INT_MAX;
    end = INT_MIN;
    teste = ft_range(start, end);
    i = 0;
    while (i < 10)
    {
        printf("%d\n", teste[i]);
        i++;
    }
}
