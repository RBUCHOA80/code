/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasouza <rasouza@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 22:29:49 by rasouza           #+#    #+#             */
/*   Updated: 2022/03/30 04:15:58 by rasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

// #include <stdio.h>
// int main(void)
// {
// 	char a[20] = "Testando tudo";
// 	printf("Tamanho = %d \n",ft_strlen(a));
// 	return (0);
// }