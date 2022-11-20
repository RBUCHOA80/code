/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_render.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucafern <lucafern@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 13:41:29 by lucafern          #+#    #+#             */
/*   Updated: 2022/09/04 16:22:15 by lucafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	add_sprite_to_frame(void *sprite, int x, int y, t_game *game)
{
	mlx_put_image_to_window(game->mlx, game->win, sprite,
		x * game->square, y * game->square);
}

void	draw_map(t_game *game)
{
	int		x;
	int		y;

	y = 0;
	while (y < game->map.height)
	{
		x = 0;
		while (x < game->map.width)
		{
			if (game->map.grid[y][x] == '1')
				add_sprite_to_frame(game->sprites.tree, x, y, game);
			else if (game->map.grid[y][x] == 'C')
				add_sprite_to_frame(game->sprites.item, x, y, game);
			else if (got_all_collectibles(game) && game->map.grid[y][x] == 'E')
				add_sprite_to_frame(game->sprites.exit, x, y, game);
			else
				add_sprite_to_frame(game->sprites.grass, x, y, game);
			x++;
		}
		y++;
	}
}

void	draw_player(t_game *game)
{
	add_sprite_to_frame(game->sprites.player,
		game->map.player_x, game->map.player_y, game);
}

void	render_frame(t_game *game)
{
	draw_map(game);
	draw_player(game);
}
