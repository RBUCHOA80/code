/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioda-si <dioda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 17:07:06 by dioda-si          #+#    #+#             */
/*   Updated: 2022/05/24 20:30:19 by dioda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*cpy;

	i = 0;
	len = ft_strlen(s1);
	if (!s1)
		return (NULL);
	cpy = (char *)malloc(sizeof(*s1) * (len + 1));
	if (!cpy)
		return (NULL);
	while (s1[i] != '\0')
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

/* int	main(void)
{
	char	*src;
	char	*dest;

	src = "Put your text here.";
	printf("%p\t%s \n", src, src);
	dest = ft_strdup(src);
	printf("%p\t%s \n", dest, dest);
	return (0);
} */