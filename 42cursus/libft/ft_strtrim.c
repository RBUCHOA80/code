/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 11:30:25 by ruchoa            #+#    #+#             */
/*   Updated: 2022/06/11 23:19:12 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	int		start;
	int		len;

	if (!s1)
		return (NULL);
	start = 0;
	len = ft_strlen(s1);
	while (start < len && ft_strchr(set, s1[start]))
		start++;
	while (start < len && ft_strchr(set, s1[len - 1]))
		len--;
	ret = ft_substr(s1, start, (len - start));
	return (ret);
}

/* int	main(void)
{
	char	*s1;
	char	*set;

	s1 = "<email><meu.nome.sobrenome@hotmail.com><email>";
	set = "<email>";
	printf("%s \n", ft_strtrim(s1, set));
	return (0);
} */
