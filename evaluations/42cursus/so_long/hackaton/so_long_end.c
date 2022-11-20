/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_end.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucafern <lucafern@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 19:14:47 by lucafern          #+#    #+#             */
/*   Updated: 2022/09/09 08:46:57 by lucafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	free_map(t_game *game)
{
	int	i;

	i = 0;
	while (i < game->map.height)
		free(game->map.grid[i++]);
	free(game->map.grid);
	game->map.grid = NULL;
}

void	free_sprites(t_game *game)
{
	mlx_destroy_image(game->mlx, game->sprites.grass);
	mlx_destroy_image(game->mlx, game->sprites.tree);
	mlx_destroy_image(game->mlx, game->sprites.item);
	mlx_destroy_image(game->mlx, game->sprites.exit);
	mlx_destroy_image(game->mlx, game->sprites.player);
}

void	error(char *message, t_game *game)
{
	ft_printf("Error\n");
	ft_printf("Message: %s\n", message);
	if (game->mlx)
		quit_game(game);
	else
		exit(EXIT_SUCCESS);
}

int	quit_game(t_game *game)
{
	if (game->map.grid)
		free_map(game);
	if (game->sprites.player)
		free_sprites(game);
	if (game->win)
		mlx_destroy_window(game->mlx, game->win);
	if (game->mlx)
		free(game->mlx);
	exit(EXIT_SUCCESS);
	return (0);
}
