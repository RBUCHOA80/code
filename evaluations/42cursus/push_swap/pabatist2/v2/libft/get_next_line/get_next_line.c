/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabatist <pabatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:23:19 by pabatist          #+#    #+#             */
/*   Updated: 2023/08/14 16:23:20 by pabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char		*trash;
	char			*buffer;
	char			*line;
	int				size_read;

	line = NULL;
	if (trash)
	{
		size_read = treat_trash(&trash, &line);
		if (size_read)
			return (line);
	}
	size_read = -2;
	while (size_read)
	{
		buffer = treat_read(fd, &size_read);
		if (size_read == -1)
			return (NULL);
		if (next_nl(buffer))
			return (make_line_with_nl(buffer, &trash, line));
		else
			line = make_line_no_nl(line, buffer);
		free(buffer);
	}
	return (line);
}

char	*make_line_no_nl(char *line, char *buffer)
{
	char	*temp;

	if (!line)
		line = ft_substr(buffer, 0, ft_strlen(buffer));
	else
	{
		temp = line;
		line = ft_strjoin(line, buffer);
		free(temp);
	}
	if (!ft_strlen(line))
	{
		free(line);
		return (NULL);
	}
	else
		return (line);
}

char	*make_line_with_nl(char *buffer, char **trash, char *line)
{
	char	*temp;

	temp = ft_substr(buffer, 0, end_line(buffer) + 1);
	*trash = ft_substr(buffer, ft_strlen(temp),
			ft_strlen(&buffer[ft_strlen(temp)]));
	free(buffer);
	buffer = NULL;
	buffer = line;
	if (!line)
	{
		line = ft_substr(temp, 0, ft_strlen(temp));
		free(temp);
		temp = NULL;
	}
	else
		line = ft_strjoin(line, temp);
	free(temp);
	free(buffer);
	if (!ft_strlen(line))
	{
		free(line);
		return (NULL);
	}
	else
		return (line);
}

char	*treat_read(int fd, int *size_read)
{
	char	*buffer;

	buffer = (char *)malloc(BUFFER_SIZE * sizeof(char));
	*size_read = read(fd, buffer, BUFFER_SIZE);
	buffer[*size_read] = '\0';
	if (*size_read == -1)
	{
		free(buffer);
		return (NULL);
	}
	return (buffer);
}

int	treat_trash(char **trash, char **line)
{
	char	*buffer;
	char	*temp;

	buffer = NULL;
	if (next_nl(*trash))
	{
		buffer = *trash;
		temp = ft_substr(buffer, 0, end_line(buffer) + 1);
		*trash = ft_substr(buffer, ft_strlen(temp),
				ft_strlen(&buffer[ft_strlen(temp)]));
		free(buffer);
		buffer = NULL;
		*line = ft_substr(temp, 0, ft_strlen(temp));
		free(temp);
		temp = NULL;
		return (1);
	}
	else
	{
		buffer = *line;
		*line = ft_substr(*trash, 0, ft_strlen(*trash));
		free(*trash);
		*trash = NULL;
		return (0);
	}
}
