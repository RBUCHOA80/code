/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:37:59 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/18 15:37:59 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str[] = "Coloque sua frase test de teste aqui";
	char	to_find[] = "test";
	int		i;

	i = 0;
	while (ft_strstr(str, to_find)[i])
	{
		write(1, &ft_strstr(str, to_find)[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
} */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			++j;
		}
		++i;
	}
	return (0);
}
