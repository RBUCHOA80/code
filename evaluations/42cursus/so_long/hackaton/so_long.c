/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucafern <lucafern@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:38:11 by lucafern          #+#    #+#             */
/*   Updated: 2022/08/16 18:38:11 by lucafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_file_name(char *file_path)
{
	int		file_path_len;
	char	*file_extension;
	int		cmp;

	file_path_len = ft_strlen(file_path);
	if (file_path_len < 4)
		return (0);
	file_extension = &file_path[file_path_len - 4];
	cmp = ft_strncmp(file_extension, ".ber", 4);
	if (cmp != 0)
		return (0);
	return (1);
}

int	main(int argc, char *argv[])
{
	t_game	game;

	if (argc == 2 && argv)
	{
		if (!check_file_name(argv[1]))
			error("Map must be .ber file.", &game);
		game.square = 32;
		load_map(argv[1], &game);
		game.full_w = game.map.width * game.square;
		game.full_h = game.map.height * game.square;
		game.steps = 0;
		game.mlx = mlx_init();
		import_all_sprites(&game);
		game.win = mlx_new_window(game.mlx, game.full_w, game.full_h,
				"So Long - Pkmn Gold Edition");
		mlx_key_hook(game.win, key_hook, &game);
		mlx_hook(game.win, 17, 1L << 2, quit_game, &game);
		render_frame(&game);
		mlx_loop(game.mlx);
	}
	else
		error("Game must be executed with 1 map file.", &game);
}
