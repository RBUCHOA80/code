/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:19:33 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/18 15:19:33 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	s1[] = "Coloque sua frase de teste aqui"; //31
	char	s2[] = "Coloque sua frase de teste aqui"; //31
	int		result;

	result = ft_strcmp(s1, s2);
	if (result == 0)
		write(1, "<s1> and <s2> are equal", 23);
	else if (result < 0)
		write(1, "<s1> is less than <s2>", 22);
	else
		write(1, "<s1> is greater than <s2>", 25);
	write(1, "\n", 1);
	return (0);
} */

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		else if (s2[i] < s1[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
