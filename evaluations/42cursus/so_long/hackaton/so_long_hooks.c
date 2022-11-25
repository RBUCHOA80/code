/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_hooks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucafern <lucafern@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 23:12:46 by lucafern          #+#    #+#             */
/*   Updated: 2022/09/04 19:30:44 by lucafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	is_valid_movement(t_game *game)
{
	if (game->map.grid[game->map.player_y][game->map.player_x] == '1')
		return (0);
	return (1);
}

void	move_player(t_game *game)
{
	ft_printf("Steps: %i\n", ++game->steps);
	if (game->map.grid[game->map.player_y][game->map.player_x] == 'C')
	{
		game->map.collected++;
		game->map.grid[game->map.player_y][game->map.player_x] = '0';
	}
	if (got_all_collectibles(game)
		&& game->map.grid[game->map.player_y][game->map.player_x] == 'E')
	{
		ft_printf("YOU WIN!\n");
		quit_game(game);
	}
}

void	get_movement(char direction, t_game *game)
{
	int	temp_x;
	int	temp_y;

	temp_x = game->map.player_x;
	temp_y = game->map.player_y;
	if (direction == 'u')
		(game->map.player_y)--;
	else if (direction == 'd')
		(game->map.player_y)++;
	else if (direction == 'l')
		(game->map.player_x)--;
	else if (direction == 'r')
		(game->map.player_x)++;
	if (is_valid_movement(game))
		move_player(game);
	else
	{
		(game->map.player_x) = temp_x;
		(game->map.player_y) = temp_y;
	}
}

int	key_hook(int keycode, t_game *game)
{
	if (keycode == ESC)
		quit_game(game);
	if (keycode == UP && game->map.player_y > 0)
		get_movement('u', game);
	if (keycode == DOWN && game->map.player_y < game->map.height - 1)
		get_movement('d', game);
	if (keycode == LEFT && game->map.player_x > 0)
		get_movement('l', game);
	if (keycode == RIGHT && game->map.player_x < game->map.width - 1)
		get_movement('r', game);
	render_frame(game);
	return (0);
}

int	got_all_collectibles(t_game *game)
{
	if (game->map.collected == game->map.collectibles)
		return (1);
	return (0);
}
