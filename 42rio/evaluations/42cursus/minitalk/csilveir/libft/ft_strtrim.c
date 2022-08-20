/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilveir <csilveir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 10:04:21 by csilveir          #+#    #+#             */
/*   Updated: 2022/06/06 11:44:10 by csilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find_part2(const char *s1, char const *set, int i)
{
	int	i2;
	int	sup;

	while (s1[i] != '\0')
	{
		i2 = 0;
		sup = 0;
		while (set[i2] != '\0')
		{
			if (!(s1[i] == set[i2]))
				sup++;
			i2++;
		}
		if (sup == ft_strlen(set))
			return (i);
		i++;
	}
	return (0);
}

static int	ft_find(char const *s1, char const *set, int i)
{
	int	i2;
	int	sup;

	if (i != 0)
	{
		while (i-- != 0)
		{
			i2 = 0;
			sup = 0;
			while (set[i2] != '\0')
			{
				if (!(s1[i] == set[i2]))
					sup++;
				i2++;
			}
			if (sup == ft_strlen(set))
				return (i +1);
		}
	}
	else
	{
		i = ft_find_part2(s1, set, i);
		return (i);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		beg;
	int		end;
	int		sup;

	end = ft_strlen(s1);
	end = ft_find(s1, set, end);
	beg = ft_find(s1, set, 0);
	str = (char *)malloc(end - beg + 1);
	if (!str)
		return (NULL);
	sup = 0;
	while (beg != end)
		str[sup++] = s1[beg++];
	str[sup] = '\0';
	return (str);
}
