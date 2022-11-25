/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:47:54 by ruchoa            #+#    #+#             */
/*   Updated: 2022/06/11 23:19:09 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ret;
	unsigned int	end;
	unsigned int	i;
	unsigned int	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (len > s_len)
		ret = (char *)malloc(sizeof(*ret) * (s_len + 1));
	else
		ret = (char *)malloc(sizeof(*ret) * (len + 1));
	if (!ret)
		return (NULL);
	end = 0;
	i = 0;
	while (s[i])
	{
		if (i >= start && end < len)
			ret[end++] = s[i];
		i++;
	}
	ret[end] = '\0';
	return (ret);
}

/* int	main(void)
{
	char	*s;

	s = "Put your text here.";
	printf("%s \n", ft_substr(s, 9, 16));
	return (0);
} */
