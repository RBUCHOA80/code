/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:30:28 by ruchoa            #+#    #+#             */
/*   Updated: 2023/04/12 19:17:23 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

/*  Includes  */
# include <mlx.h> //libmlx
# include <stdlib.h> //exit
# include <libftprintf.h> //ft_printf

/*  Keys  */
# if __APPLE__ /*  MacOS Keys  */
#  define EVENT_CLOSE_BTN	17
#  define KEY_ESC			53
#  define KEY_W				13
#  define KEY_A				0
#  define KEY_S				1
#  define KEY_D				2
#  define KEY_UP			126
#  define KEY_DOWN			125
#  define KEY_LEFT			123
#  define KEY_RIGHT			124
#  define KEY_PLUS			24
#  define KEY_MINUS			27
#  define KEY_SPACE			49
#  define KEY_ONE			18
#  define KEY_TWO			19
#  define KEY_THREE			20
#  define KEY_FOUR			21
#  define MOUSE_WHEEL_UP	4
#  define MOUSE_WHEEL_DOWN	5
#  define MOUSE_BTN			1
#  define X_BTN				65307
# else /*  Linux Keys  */
#  define EVENT_CLOSE_BTN	17
#  define KEY_ESC			65307
#  define KEY_W				119
#  define KEY_A				97
#  define KEY_S				115
#  define KEY_D				100
#  define KEY_UP			65362
#  define KEY_DOWN			65364
#  define KEY_LEFT			65361
#  define KEY_RIGHT			65363
#  define KEY_PLUS			61
#  define KEY_MINUS			45
#  define KEY_SPACE			32
#  define KEY_ONE			49
#  define KEY_TWO			50
#  define KEY_THREE			51
#  define KEY_FOUR			52
#  define MOUSE_WHEEL_UP	4
#  define MOUSE_WHEEL_DOWN	5
#  define MOUSE_BTN			1
#  define X_BTN				65307
# endif

/*  Dimensions  */
# define WINDOW_TITTLE "42|RIO - fract-ol"
# define WINDOW_WIDTH		900
# define WINDOW_HEIGHT		900
# define BITS_PER_PIXEL		32
# define MAX_ITERATIONS		60

/*  Fractal sets  */
# define MANDELBROT			1
# define JULIA				2
# define BURNING_SHIP		3
# define TRICORN			4

/* enum
{
	ON_KEYDOWN		= 2,	//int (*f)(int keycode, void *param)
	ON_KEYUP		= 3,	//int (*f)(int keycode, void *param)
	ON_MOUSEDOWN	= 4,	//int (*f)(int button, int x, int y, void *param)
	ON_MOUSEUP		= 5,	//int (*f)(int button, int x, int y, void *param)
	ON_MOUSEMOVE	= 6,	//int (*f)(int x, int y, void *param)
	ON_EXPOSE		= 12,	//int (*f)(void *param)
	ON_DESTROY		= 17,	//int (*f)(void *param)
}; */

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
