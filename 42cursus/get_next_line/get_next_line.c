/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 23:42:55 by ruchoa            #+#    #+#             */
/*   Updated: 2022/07/22 22:32:41 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*next_line;
	char		*actual_line;

	if (read(fd, 0, 0) < 0 || BUFFER_SIZE < 1)
		return (NULL);
	next_line = ft_get_buffer(next_line, fd);
	if (!next_line)
		return (NULL);
	actual_line = ft_actual_line(next_line);
	next_line = ft_new_next_line(next_line);
	return (actual_line);
}

char	*ft_get_buffer(char *next_line, int fd)
{
	char	*buf;
	int		len;

	buf = (char *)malloc(sizeof(*buf) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	len = 1;
	while (len)
	{
		len = read(fd, buf, BUFFER_SIZE);
		if (len < 0)
		{
			free(buf);
			return (NULL);
		}
		buf[len] = '\0';
		next_line = ft_strjoin(next_line, buf);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	free(buf);
	return (next_line);
}

char	*ft_actual_line(char *next_line)
{
	char	*actual_line;
	int		size;
	int		i;

	if (!next_line[0])
		return (NULL);
	size = 0;
	while (next_line[size] && next_line[size] != '\n')
		size++;
	actual_line = (char *)malloc(sizeof(*actual_line) * (size + 2));
	if (!actual_line)
		return (NULL);
	i = 0;
	while (i < size)
	{
		actual_line[i] = next_line[i];
		i++;
	}
	if (next_line[i] == '\n')
	{
		actual_line[i] = next_line[i];
		i++;
	}
	actual_line[i] = '\0';
	return (actual_line);
}

char	*ft_new_next_line(char *next_line)
{
	char	*new_next_line;
	int		len;
	int		i;
	int		j;

	i = 0;
	while (next_line[i] && next_line[i] != '\n')
		i++;
	if (!next_line[i])
	{
		free(next_line);
		return (NULL);
	}
	len = ft_strlen(next_line);
	new_next_line = (char *)malloc(sizeof(*new_next_line) * (len - i + 1));
	if (!new_next_line)
		return (NULL);
	i++;
	j = 0;
	while (next_line[i])
		new_next_line[j++] = next_line[i++];
	new_next_line[j] = '\0';
	free(next_line);
	return (new_next_line);
}
