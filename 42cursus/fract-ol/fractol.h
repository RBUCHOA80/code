/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:30:28 by ruchoa            #+#    #+#             */
/*   Updated: 2022/12/10 09:30:12 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <mlx.h> //libmlx
# include <stdlib.h> //exit
# include <libftprintf.h> //ft_printf

# ifndef FD
#  define FD 1
# endif

# define WINDOW_TITTLE "42|RIO - fract-ol"
# define WINDOW_WIDTH  768
# define WINDOW_HEIGHT 432
# define BITS_PER_PIXEL 32

enum
{
	ON_KEYDOWN		= 2,
	ON_KEYUP		= 3,
	ON_MOUSEDOWN	= 4,
	ON_MOUSEUP		= 5,
	ON_MOUSEMOVE	= 6,
	ON_EXPOSE		= 12,
	ON_DESTROY		= 17,
};

typedef struct s_data
{
	void	*mlx;
	void	*win;
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}	t_data;

void	my_mlx_pixel_put(t_data *data, int x, int y, int color);

int		events(int keycode, t_data *exec);
int		mlx_close(t_data *exec);
void	print_keycode(int keycode);

#endif
