/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:43:07 by ruchoa            #+#    #+#             */
/*   Updated: 2023/03/04 21:39:15 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

/* clean_exit:
*	Destroys the window, the MLX image and the MLX instance,
*	and frees the color palette, before ending the MLX loop
*	and destroying the display. Exits the process with the provided
*	exit code.
*/
void	clean_exit(int exit_code, t_fractol *exec)
{
	if (!exec)
		exit(exit_code);
	if (exec->palette)
		free(exec->palette);
	if (exec->img)
		mlx_destroy_image(exec->mlx, exec->img);
	if (exec->win && exec->mlx)
		mlx_destroy_window(exec->mlx, exec->win);
/* 	if (exec->mlx)
	{
		mlx_loop_end(exec->mlx);
		mlx_destroy_display(exec->mlx);
		free(exec->mlx);
	} */
	exit(exit_code);
}

/* msg:
*	Displays an error message to the standard error.
*	Returns the provided error number.
*/
int	msg(char *str1, char *str2, int errno)
{
	ft_putstr_fd("Fractol: ", 2);
	ft_putstr_fd(str1, 2);
	ft_putendl_fd(str2, 2);
	return (errno);
}

/* end_fractol:
*	Exits cleanly from the program.
*	This function is registered to an MLX hook: whenever the
*	user hits the right button, this function will be called
*	automatically.
*/
int	end_fractol(t_fractol *mlx)
{
	clean_exit(0, mlx);
	return (0);
}
