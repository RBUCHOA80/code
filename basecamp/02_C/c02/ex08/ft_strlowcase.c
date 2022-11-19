/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 01:45:28 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/15 01:45:28 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	str[] = {"FraseDeTesteAqui"};
	int		n;

	n = 0;
	ft_strlowcase(str);
	while (str[n])
	{
		write(1, &str[n], 1);
		n++;
	}
	return (0);
} */

char	*ft_strlowcase(char *str)
{
	int		n;

	n = 0;
	while (str[n])
	{
		if ('A' <= str[n] && str[n] <= 'Z')
		{
			str[n] += 32;
		}
		n++;
	}
	return (str);
}
