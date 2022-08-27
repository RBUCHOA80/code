/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:18:29 by ruchoa            #+#    #+#             */
/*   Updated: 2022/06/11 23:20:18 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_t_elem(char *s, char c);
static void	*ft_free(char **split, int i);

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		t_elem;
	int		n_elem;
	int		len;

	if (!s)
		return (NULL);
	t_elem = ft_t_elem((char *)s, c);
	split = (char **)ft_calloc((t_elem + 1), sizeof(*split));
	if (!split)
		return (NULL);
	n_elem = 0;
	while (n_elem < t_elem)
	{
		while (*(char *)s == c && *(char *)s != '\0')
			s++;
		len = 0;
		while (s[len] != c && s[len] != '\0')
			len++;
		split[n_elem] = ft_substr(s, 0, len);
		if (!split[n_elem++])
			return (ft_free(split, n_elem));
		s = s + len;
	}
	return (split);
}

static int	ft_t_elem(char *s, char c)
{
	int	len;
	int	i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		len = 0;
		while (s[len] != c && s[len] != '\0')
			len++;
		s = s + len;
		if (len)
			i++;
	}
	return (i);
}

static void	*ft_free(char **split, int n_elem)
{
	while (--n_elem)
		free(split[n_elem]);
	free(split);
	return (NULL);
}

/* int	main(void)
{
	char	**ret;
	char	*s;
	char	c;
	int		i;

	s = "  Put  your   text  here.  ";
	c = ' ';
	ret = ft_split(s, c);
	i = 0;
	while (ret[i] != NULL)
	{
		printf("%i.|%s| \n", i + 1, ret[i]);
		i++;
	}
	return (0);
} */
