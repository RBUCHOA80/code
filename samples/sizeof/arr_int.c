/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_int.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 10:03:32 by ruchoa            #+#    #+#             */
/*   Updated: 2023/01/08 10:33:51 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main_str(void)
{
	char	str[] = "0123456789"; //'\0'
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		printf("str[%i] = %c\n", i, str[i]);
		i++;
	}
}

void	print_arr(int arr[], int len)
{
	int		i;

	i = 0;
	while (i < len)
	{
		printf("arr[%i] = %i\n", i, arr[i]);
		i++;
	}
}

int	main(void)
{
	int		arr[] = {1, 2, 3, 4, 5, 0, 6, 7, 8, 9};
	int		len;

	len = sizeof(arr) / sizeof(*arr);
	print_arr(arr, len);
	return (0);
}
