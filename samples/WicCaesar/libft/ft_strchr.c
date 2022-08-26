/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:23:17 by cnascime          #+#    #+#             */
/*   Updated: 2022/08/24 09:31:52 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Locates the first occurrence of a char in a given string. The terminating
// NUL-character is considered to be part of the string; therefore if c == \0,
// the function returns the pointer to the terminating \0.
char	*ft_strchr(const char *lookingfor, int character)
{
	int	i;

	i = 0;
	while (lookingfor[i] != '\0')
	{
		if (lookingfor[i] == (char)character)
			return ((char *)lookingfor + i);
		i++;
	}
	if (lookingfor[i] == (char)character)
		return ((char *)lookingfor + i);
	return (0);
}
