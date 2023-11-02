#include "shoot.h"

int	key_hook(int keycode, t_data *data)
{
	if (keycode == 53)
	{
		mlx_destroy_window(data->mlx, data->win);
		exit(0);
	}
	if (keycode == 123) // Touche gauche
		data->x -= 5;
	if (keycode == 124) // Touche droite
		data->x += 5;

	mlx_clear_window(data->mlx, data->win);
	mlx_pixel_put(data->mlx, data->win, data->x, data->y, 0xFFFFFF);
	return (0);
}
