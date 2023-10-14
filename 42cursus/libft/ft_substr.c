/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:47:54 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/13 21:11:25 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ret;
	unsigned int	s_len;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		len = 0;
	if (len > (s_len - start))
		len = (s_len - start);
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	while (i < len)
	{
		ret[i] = s[start++];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

/* char	*ft_substr(char const *s, unsigned int start, size_t len)
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
} */

/* int	main(void)
{
	char	*s;

	s = "Put your text here.";
	printf("%s \n", ft_substr(s, 9, 16));
	return (0);
} */
