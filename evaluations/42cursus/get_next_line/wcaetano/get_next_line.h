/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 14:49:48 by wcaetano          #+#    #+#             */
/*   Updated: 2022/07/31 03:48:30 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_buffer {
	char	buffer[BUFFER_SIZE];
	size_t	start;
	size_t	end;
	int		last_read;
}				t_buffer;

char	*get_next_line(int fd);
void	load_buffer(t_buffer *queue, int first_read);
size_t	find(t_buffer *queue, char c);
size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*get_line(char *line_buffer, t_buffer *buffer, size_t b_size);

#endif