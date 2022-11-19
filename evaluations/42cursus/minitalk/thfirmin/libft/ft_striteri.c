/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 20:20:03 by ruchoa            #+#    #+#             */
/*   Updated: 2022/06/11 23:20:01 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* static void	ft_upper(unsigned int n, char *s)
{
	if (n >= 0 && 'a' <= s[0] && s[0] <= 'z')
			s[0] = s[0] - 32;
}

char	g_str[] = "Put your text here.";

int	main(void)
{
	void	(*f)(unsigned int, char *);

	f = ft_upper;
	ft_striteri(g_str, f);
	printf("%s \n", g_str);
	return (0);
} */
