/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 09:33:49 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/10 10:21:08 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nmatch(char *s1, char *s2)
{
	if ((*s1 != '\0') && (*s2 == '*'))
		return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
	if ((*s1 == '\0') && (*s2 == '*'))
		return (nmatch(s1, s2 + 1));
	if ((*s1 == *s2) && (*s1 != '\0') && (*s2 != '\0'))
		return (nmatch(s1 + 1, s2 + 1));
	if ((*s1 == '\0') && (*s2 == '\0'))
		return (1);
	return (0);
}
