/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:19:57 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/18 16:30:05 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	s1[] = {"Teste 1 aqui"}; //12
	char	s2[] = {"Teste 2 aqui"}; //12
	int		ret;
	int		n;

	n = 7;
	ret = ft_strncmp(s1, s2, n);
	if (ret < 0)
		printf("<s1> is less than <s2>\n");
	else if (ret > 0)
		printf("<s1> is greater than <s2>\n");
	else
		printf("<s1> and <s2> are equal\n");
	return (0);
} */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	dist;

	dist = 0;
	if (n <= 0)
		return (0);
	while (dist < n - 1 && s1[dist] && s2[dist])
	{
		if (s1[dist] != s2[dist])
			return (s1[dist] - s2[dist]);
		dist++;
	}
	return (s1[dist] - s2[dist]);
}
