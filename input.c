#include "shoot.h"

int	key_press(int keycode, t_data *vars)
{
	key_hook(keycode, vars);
	if (keycode == XK_Escape)
		close_everything(vars);
	return (0);
}

int	input_manag(t_data *vars)
{
	mlx_hook(vars->win, 2, 1, &key_press, vars);
	//mlx_hook(vars->win, 3, 10, &key_release, vars);
	mlx_hook(vars->win, 17, 1L << 1, close_everything, vars);
	return (0);
}