#include "shoot.h"

int	close_everything(t_data *vars)
{
	//mlx_destroy_image(vars->mlx, vars->img->img);
	mlx_destroy_window(vars->mlx, vars->win);
	mlx_destroy_display(vars->mlx);
	//free(vars->img);
	free(vars->mlx);
	exit (0);
	return (0);
}