/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 19:36:16 by ruchoa            #+#    #+#             */
/*   Updated: 2022/06/25 16:52:02 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	c;
	char	*str;

	// if (!s1)
	// {
	// 	s1 = (char *)malloc(1 * sizeof(char));
	// 	s1[0] = '\0';
	// }
	if (!s1 && !s2)
		return (NULL);
	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = -1;
	c = 0;
	if (s1)
		while (s1[++i] != '\0')
			str[i] = s1[i];
	while (s2[c] != '\0')
		str[i++] = s2[c++];
	str[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	// free(s1);
	return (str);
} */

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*ret;

	if (!s1 && !s2)
		return (NULL);
	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	ret = (char *)malloc(sizeof(char) * s1_len + s2_len + 1);
	if (!ret)
		return (NULL);
	ft_memcpy(ret, s1, s1_len);
	ft_memcpy(ret + s1_len, s2, s2_len);
	ret[s1_len + s2_len] = '\0';
	return (ret);
}

/* int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "Put your ";
	s2 = "text here.";
	printf("%s \n", ft_strjoin(s1, s2));
	return (0);
} */
