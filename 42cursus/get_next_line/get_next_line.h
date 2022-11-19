/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 21:14:29 by ruchoa            #+#    #+#             */
/*   Updated: 2022/07/07 13:14:06 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h> //malloc, free
# include <unistd.h> //write, read

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 80
# endif

char	*get_next_line(int fd);

char	*ft_get_buffer(char *next_line, int fd);
char	*ft_actual_line(char *next_line);
char	*ft_new_next_line(char *next_line);

void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *str);

#endif
