/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:14:56 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/07/22 22:46:32 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_get_new_line(char *str)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = 0;
	if (str[i] == '\0')
	{
		free(str);
		return (NULL);
	}
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	temp = malloc((ft_strlen(str) - i) + 1);
	while (str[i])
		temp[j++] = str[i++];
	temp[j] = '\0';
	free(str);
	return (temp);
}

char	*ft_get_line(char *str)
{
	char	*temp;
	int		i;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	temp = malloc (i + 2);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		temp[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
		temp[i++] = '\n';
	temp[i] = '\0';
	return (temp);
}

char	*ft_read_line(int fd, char *str, char *buff)
{
	int	rd;

	rd = 1;
	while (rd != 0)
	{
		rd = read (fd, buff, BUFFER_SIZE);
		if (rd == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[rd] = '\0';
		if (str == NULL)
		{
			str = malloc(1);
			str[0] = '\0';
		}
		str = ft_strjoin (str, buff);
		if (ft_strchr(buff, '\n'))
			break ;
	}
	return (str);
}

char	*get_next_line(int fd)
{
	char		*temp;
	char		*line;
	static char	*str;

	if (BUFFER_SIZE <= 0 || read (fd, 0, 0) < 0)
		return (NULL);
	temp = malloc (BUFFER_SIZE + 1);
	str = ft_read_line(fd, str, temp);
	free(temp);
	line = ft_get_line (str);
	str = ft_get_new_line (str);
	return (line);
}
