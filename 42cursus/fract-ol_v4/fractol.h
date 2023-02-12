/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:41:40 by ruchoa            #+#    #+#             */
/*   Updated: 2023/02/12 14:40:09 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <mlx.h> //libmlx
# include <libft.h> //libft
# include <stdio.h>
# include <math.h>

# if __APPLE__ /*  MacOS Keys  */
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
#  define KEY_FIVE			53
#  define KEY_K				107
#  define MOUSE_WHEEL_UP	4
#  define MOUSE_WHEEL_DOWN	5
#  define MOUSE_WHEEL_BTN	3
#  define MOUSE_BTN			1
#  define MOUSE_BTN_2		3
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
#  define KEY_FIVE			53
#  define KEY_K				107
#  define MOUSE_WHEEL_UP	4
#  define MOUSE_WHEEL_DOWN	5
#  define MOUSE_WHEEL_BTN	3
#  define MOUSE_BTN			1
#  define MOUSE_BTN_2		3
# endif

/*  Dimensions  */
# define WIDTH				900
# define HEIGHT				900
# define MAX_ITERATIONS		60

/*  Fractal sets  */
# define MANDELBROT			1
# define JULIA				2
# define BURNING_SHIP		3
# define TRICORN			4
# define MANDELBOX			5

/*  Struct  */
typedef struct s_fractol
{
	void	*mlx;
	void	*win;
	void	*img;
	char	*buf;
	int		set;
	double	min_r;
	double	max_r;
	double	min_i;
	double	max_i;
	double	kr;
	double	ki;
	double	sx;
	double	rx;
	double	fx;
	int		*palette;
	int		color_pattern;
	int		color;
}	t_fractol;

/*  Fractal Sets  */
int		mandelbrot(double cr, double ci);
int		julia(t_fractol *f, double zr, double zi);
int		burning_ship(double cr, double ci);
int		tricorn(double cr, double ci);
int		mandelbox(t_fractol *f, double cr, double ci);

/*  Draw Fractal  */
void	render(t_fractol *f);
int		julia_shift(int x, int y, t_fractol *f);

/* Colors  */
void	color_shift(t_fractol *f);
void	set_color_mono(t_fractol *f, int color);
void	set_color_multiple(t_fractol *f, int colors[4], int n);
void	set_color_zebra(t_fractol *f, int color);
void	set_color_triad(t_fractol *f, int color);
void	set_color_tetra(t_fractol *f, int color);
void	set_color_opposites(t_fractol *f, int color);
void	set_color_contrasted(t_fractol *f, int color);
void	set_color_graphic(t_fractol *f, int color);
int		get_percent_color(int color, double percent);

/*  Events  */
int		key_event(int keycode, t_fractol *mlx);
int		mouse_event(int keycode, int x, int y, t_fractol *mlx);

/* Initialization  */
void	clean_init(t_fractol *f);
void	reinit_img(t_fractol *f);
void	init(t_fractol *f);
void	get_complex_layout(t_fractol *f);
void	get_color(t_fractol *f, int ac, char **av);
double	ft_atof(char *str);

/*  Utils  */
int		end_fractol(t_fractol *mlx);
void	clean_exit(int error_code, t_fractol *f);
int		msg(char *str1, char *str2, int errno);
void	help_msg(t_fractol *f);
void	print_controls(void);
int		ft_ishexdigit(int c);
int		ft_isspace(int c);

#endif
