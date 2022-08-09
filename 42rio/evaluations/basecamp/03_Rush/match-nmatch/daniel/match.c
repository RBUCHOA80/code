/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daolivei <daolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 23:20:15 by daolivei          #+#    #+#             */
/*   Updated: 2022/04/10 23:20:19 by daolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*wildcard_match(char *s1, char *s2);
char	*strstr_wild(char *str, char *to_find);

int	match(char *s1, char *s2)
{
	while (*s2)
	{
		if (*s1 != *s2 && *s2 != '*')
			return (0);
		if (*s2 == '*')
			s1 = wildcard_match(s1, s2);
		if (*s1 == *s2 && *s2 != '*')
			s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (1);
	return (0);
}

char	*wildcard_match(char *s1, char *s2)
{
	if (*(s2 + 1) == '*')
		return (s1);
	if (*(s2 + 1) == '\0')
	{
		while (*s1)
			s1++;
		return (s1);
	}
	return (strstr_wild(s1, s2));
}

char	*strstr_wild(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j + 1] == str[i + j])
		{
			if (to_find[j + 2] == '*')
				return (&str[i]);
			if (to_find[j + 2] == '\0' && str[(i + j) + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (str);
}
