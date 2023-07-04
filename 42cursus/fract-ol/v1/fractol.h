/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:30:28 by ruchoa            #+#    #+#             */
/*   Updated: 2023/07/03 21:31:11 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

/*        INCLUDES  */
# include <mlx.h> //libmlx
# include <libft.h> //libft
# include <libftprintf.h> //ft_printf

/*     KEYS  */
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
#  define MOUSE_LEFT_BTN	1
#  define MOUSE_MIDDLE_BTN	3
#  define MOUSE_RIGHT_BTN	2
#  define MOUSE_WHEEL_UP	4
#  define MOUSE_WHEEL_DOWN	5
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
#  define MOUSE_LEFT_BTN	1
#  define MOUSE_MIDDLE_BTN	2
#  define MOUSE_RIGHT_BTN	3
#  define MOUSE_WHEEL_UP	4
#  define MOUSE_WHEEL_DOWN	5
# endif

/*       DIMENSIONS  */
# define WINDOW_TITTLE "42|RIO - fract-ol"
# define WINDOW_WIDTH		1000
# define WINDOW_HEIGHT		1000
# define MAX_ITERATIONS		60

/*       FRACTAL SETS  */
# define JULIA				1
# define BURNING_SHIP		2
# define TRICORN			3
# define MANDELBROT			4

/*      STRUCTS  */
typedef struct s_data
{
	void	*mlx;
	void	*win;
	void	*img;
	char	*pixels;
	int		set;
	double	min_x_coord;
	double	max_x_coord;
	double	min_y_coord;
	double	max_y_coord;
	double	const_x;
	double	const_y;
	int		*color_table;
	int		change_color;
	int		color;
}	t_data;

/*      PROTOTYPES  */
void	ft_init(t_data *exec);
void	ft_draw(t_data *exec);
int		ft_check_fractal(t_data *exec, double nbr_real, double nbr_imaginary);

/*      HOOKS  */
int		ft_hooks(t_data *exec);
int		ft_key_events(int keycode, t_data *exec);
int		ft_mouse_events(int keycode, int x, int y, t_data *exec);

int		ft_mlx_close(t_data *exec);

/*      SETS  */
int		julia_shift(int x, int y, t_data *exec);
int		set_julia(t_data *exec, double nbr_real, double nbr_imaginary);
int		set_burning_ship(double nbr_real, double nbr_imaginary);
int		set_tricorn(double nbr_real, double nbr_imaginary);
int		set_mandelbrot(double c_real, double c_imaginary);

#endif
