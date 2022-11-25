#ifndef FRACT_OL
# define FRACT_OL

# include "libft/libft.h"
# include "mlx/mlx.h"

//# define COLORS
//# define RED "\033[1;31m"
//# define BLUE "\033[1;34m"
//# define YLLW "\033[1;33m"
//# define GREEN "\033[1;32m"
//# define PURPL "\033[1;35m"
//# define RESET "\033[0m"
//
//# ifndef MAC_OS 
//#  define ESC 65307
//#  define ONE 18
//#  define TWO 19
//#  define THREE 20
//#  define FOUR 21
//#  define PLUS 24
//#  define MINUS 27
//#  define SCRLDWN 4
//#  define SCRLUP 5
//# else
//#  define ESC 53
//#  define ONE 49
//#  define TWO 50
//#  define THREE 51
//#  define FOUR 52
//#  define PLUS 61
//#  define MINUS 45
//#  define SCRLDWN 5
//#  define SCRLUP 4
//# endif

# define WIN_SIZE 800

typedef struct	complex_number
{
	double	r;
	double	i;	
}		complx;

typedef struct	s_data
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_img;

typedef struct	s_vars
{
	void	*mlx;
	void	*win;
}				t_vars;

typedef struct	s_render
{
	complx	start;
	complx	center;
	complx	constant;
	double	zoom;
	double	unit;
	char	*type;
	int		max_iterations;
	int		printed;
	int		*color;
	int		**pixel;
}				t_render;

typedef struct	s_info
{
	t_vars		*vars;
	t_img		*img;
	t_render	*render;
}				t_info;


int		handle_mouse(int button, int x, int y, t_render *render);
int		handle_destroy(t_info *info);
int		handle_keypress(int keycode, t_info *info);
int		render_next_frame(t_info *info);
int		hsv_to_rgb(double h, double s, double v);
int		get_color(int iterations, int limit);
int		rgba(unsigned char r, unsigned char g, unsigned char b, unsigned char a);
int		fractal_iteration(complx z, complx c, int limit);
int		*get_color_array(int limit);
void	check_arguments(int argc, char **argv);
void	pixel_put(t_img *img, int x, int y, int color);
void	initialize_image(t_info *info);
void	initialize_window(t_info *info);
void	initialize_fractal(t_render *render);
void	draw_fractal(t_info *info);
void	print_mandelbrot(t_info *img);
void	print_julia(complx point, t_info *info);
void	print_pixels(t_info *info);
double	absolute_value(complx nbr);
complx	find_start(complx center, double unit, int win_size);
complx	complx_pow(complx nbr, int power);
complx	complx_sum(complx a, complx b);


#endif
