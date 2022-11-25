/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcaetano <wcaetano@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:44:02 by wcaetano          #+#    #+#             */
/*   Updated: 2022/07/30 22:51:02 by wcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	int				i;
	char			*line_buffer;
	static t_buffer	lst[FOPEN_MAX];

	line_buffer = NULL;
	if (read(fd, NULL, 0) < 0 || FOPEN_MAX < fd)
		return (NULL);
	if (!lst[fd].last_read)
		load_buffer(&lst[fd], read(fd, lst[fd].buffer, BUFFER_SIZE));
	while (lst[fd].last_read > 0)
	{
		if (lst[fd].start != lst[fd].end)
		{
			i = find(&lst[fd], '\n');
			line_buffer = get_line(line_buffer, &lst[fd], i);
			if (!line_buffer)
				return (NULL);
			lst[fd].start += i;
			if (line_buffer[ft_strlen(line_buffer) - 1] == '\n')
				return (line_buffer);
		}
		else
			load_buffer(&lst[fd], read(fd, lst[fd].buffer, BUFFER_SIZE));
	}
	return (line_buffer);
}
