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

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[] = {"tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um"};
	int		n;

	n = 0;
	ft_strcapitalize(str);
	while (str[n])
	{
		write(1, &str[n], 1);
		n++;
	}
	return (0);
} */

char	*ft_strcapitalize(char *str)
{
	int		n;

	n = 0;
	while (str[n])
	{
		if ('a' <= str[0] && str[0] <= 'z')
		{
			str[0] -= 32;
		}
		if (('a' <= str[n] && str[n] <= 'z')
			&& ((str[n -1] < 'A') || ('Z' < str[n -1] && str[n -1] < 'a')
				|| 'z' < str[n -1]))
			str[n] -= 32;
		n++;
	}
	return (str);
}
