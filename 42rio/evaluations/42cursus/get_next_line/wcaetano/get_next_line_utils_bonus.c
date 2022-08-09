/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcaetano <wcaetano@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 11:44:19 by wcaetano          #+#    #+#             */
/*   Updated: 2022/07/02 11:55:44 by wcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	load_buffer(t_buffer *queue, int first_read)
{
	queue->start = 0;
	queue->end = first_read;
	queue->last_read = first_read;
}

size_t	find(t_buffer *queue, char c)
{
	size_t	i;

	i = queue->start;
	while (queue->buffer[i] != c && i < queue->end - 1)
		i++;
	return (i - queue->start + 1);
}

size_t	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	i = 0;
	src_len = ft_strlen(src);
	while (dst[i] && (i < dstsize))
		i++;
	if (i == dstsize)
		return (dstsize + src_len);
	dst_len = ft_strlen(dst);
	while (*src && (i < dstsize - 1))
		dst[i++] = *src++;
	dst[i] = '\0';
	return (dst_len + src_len);
}

char	*get_line(char *line_buffer, t_buffer *buffer, size_t b_size)
{
	char	*tmp;

	if (line_buffer)
	{
		tmp = malloc(ft_strlen(line_buffer) + b_size + 1);
		tmp[0] = '\0';
		ft_strlcat(tmp, line_buffer, ft_strlen(line_buffer) + 1);
		free(line_buffer);
		if (!tmp)
			return (NULL);
		line_buffer = tmp;
	}
	else
	{
		line_buffer = malloc(b_size + 1);
		line_buffer[0] = '\0';
	}
	if (!line_buffer)
		return (NULL);
	ft_strlcat(line_buffer, &buffer->buffer[buffer->start],
		ft_strlen(line_buffer) + b_size + 1);
	return (line_buffer);
}
