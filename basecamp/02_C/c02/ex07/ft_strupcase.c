/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 01:36:23 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/15 01:36:23 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	str[] = {"FraseDeTesteAqui"};
	int		n;

	n = 0;
	ft_strupcase(str);
	while (str[n])
	{
		write(1, &str[n], 1);
		n++;
	}
	return (0);
} */

char	*ft_strupcase(char *str)
{
	int		n;

	n = 0;
	while (str[n])
	{
		if ('a' <= str[n] && str[n] <= 'z')
		{
			str[n] -= 32;
		}
		n++;
	}
	return (str);
}
