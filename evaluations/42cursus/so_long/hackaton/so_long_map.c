/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucafern <lucafern@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 20:28:19 by lucafern          #+#    #+#             */
/*   Updated: 2022/09/10 18:31:30 by lucafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	load_map(char *file_path, t_game *game)
{
	t_map	map;
	int		fd;

	fd = open(file_path, O_RDONLY);
	if (fd == -1)
		error("File doesn't exist", game);
	measure_map(fd, &map);
	close (fd);
	game->map = map;
	game->map.collectibles = 0;
	game->map.p_counter = 0;
	game->map.e_counter = 0;
	fd = open(file_path, O_RDONLY);
	fill_map(fd, game);
	close (fd);
	game->map.collected = 0;
}

void	measure_map(int fd, t_map *map)
{
	char	buff[1];
	int		i;

	map->width = 0;
	while (read(fd, buff, 1) && *buff != '\n')
		(map->width)++;
	map->height = 1;
	while (read(fd, buff, 1) && *buff != '\0')
		if (*buff == '\n')
			(map->height)++;
	(map->height)++;
	map->grid = (char **)malloc(map->height * sizeof(char *));
	i = 0;
	while (i < map->height)
		map->grid[i++] = (char *)malloc(map->width * sizeof(char));
}

void	check_cell(char buff, int x, int y, t_game *game)
{
	if (!ft_strchr("01PCE\n", buff))
		error("Map must contain only \"01PCE\" and line breaks.", game);
	if ((buff == '\n' && x != game->map.width)
		|| (buff != '\n' && x == game->map.width))
		error("All map lines must have the same width.", game);
	if ((x == 0 && buff != '1') || (x == game->map.width - 1 && buff != '1')
		|| (y == 0 && buff != '1' && buff != '\n')
		|| (y == game->map.height - 1 && buff != '1' && buff != '\n'))
		error("Map must be surrounded by '1'.", game);
	if (buff == 'P')
		game->map.p_counter++;
	if (buff == 'E')
		game->map.e_counter++;
	if (buff == 'C')
		game->map.collectibles++;
}

void	fill_map(int fd, t_game *game)
{
	int		x;
	int		y;
	char	buff[1];

	x = 0;
	y = 0;
	while (read(fd, buff, 1) && *buff != '\0')
	{
		check_cell(*buff, x, y, game);
		if (*buff == 'P')
		{
			game->map.player_x = x;
			game->map.player_y = y;
		}
		if (*buff != '\n')
			game->map.grid[y][x++] = *buff;
		if (*buff == '\n')
		{
			y++;
			x = 0;
		}
	}
	if (game->map.p_counter != 1 || game->map.e_counter != 1
		|| game->map.collectibles == 0)
		error("Map must contain 1 'E', 1 'P', and at least 1 'C'.", game);
}
