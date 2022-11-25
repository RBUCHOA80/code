/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_sprites.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucafern <lucafern@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 21:22:36 by lucafern          #+#    #+#             */
/*   Updated: 2022/08/31 21:59:12 by lucafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	*import_sprite(char *file_path, t_game *game)
{
	void	*img;
	int		img_w;
	int		img_h;

	img = mlx_xpm_file_to_image(game->mlx, file_path, &img_w, &img_h);
	return (img);
}

void	import_all_sprites(t_game *game)
{
	game->sprites.grass = import_sprite("./assets/grass.xpm", game);
	game->sprites.tree = import_sprite("./assets/tree.xpm", game);
	game->sprites.item = import_sprite("./assets/item.xpm", game);
	game->sprites.exit = import_sprite("./assets/exit.xpm", game);
	game->sprites.player = import_sprite("./assets/char_0.xpm", game);
}
