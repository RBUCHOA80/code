/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucafern <lucafern@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:38:20 by lucafern          #+#    #+#             */
/*   Updated: 2022/08/16 18:38:20 by lucafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# ifdef __linux__
#  include  "mlx_linux/mlx.h"
#  define UP		119
#  define DOWN		115
#  define LEFT		97
#  define RIGHT		100
#  define ESC		65307
# else
#  include "mlx/mlx.h"
#  define UP		13
#  define DOWN		1
#  define LEFT		0
#  define RIGHT		2
#  define ESC		53
# endif
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "./libft/libft.h"

typedef struct s_img {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_img;

typedef struct s_map {
	int		width;
	int		height;
	char	**grid;
	int		collectibles;
	int		collected;
	int		p_counter;
	int		e_counter;
	int		player_x;
	int		player_y;
}				t_map;

typedef struct s_sprites {
	void	*grass;
	void	*tree;
	void	*item;
	void	*exit;
	void	*player;
}				t_sprites;

typedef struct s_game {
	void		*mlx;
	void		*win;
	int			square;
	int			full_w;
	int			full_h;
	int			steps;
	t_map		map;
	t_img		img;
	t_sprites	sprites;
}				t_game;

int		check_file_name(char *file_path);

void	load_map(char *file_path, t_game *game);
void	measure_map(int fd, t_map *map);
void	check_cell(char buff, int x, int y, t_game *game);
void	fill_map(int fd, t_game *game);

void	*import_sprite(char *file_path, t_game *game);
void	import_all_sprites(t_game *game);

void	add_sprite_to_frame(void *sprite, int x, int y, t_game *game);
void	draw_map(t_game *game);
void	draw_player(t_game *game);
void	render_frame(t_game *game);

int		is_valid_movement(t_game *game);
void	get_movement(char direction, t_game *game);
int		key_hook(int keycode, t_game *game);
int		got_all_collectibles(t_game *game);

void	free_sprites(t_game *game);
void	free_map(t_game *game);
void	error(char *message, t_game *game);
int		quit_game(t_game *game);

#endif