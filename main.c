#include "shoot.h"

void *update_game(t_data *data)
{
	int i = 0, j = 0;

    //input_manag(data);
	data->img = mlx_new_image(data->mlx, WIDTH, HEIGHT);
	while (i < HEIGHT)
	{
		j = 0;
		while (j < WIDTH)
		{
			my_mlx_pixel_put(data->mlx, data->win, j, i, create_trgb(1,1,1,1));
			j++;
		}
		i++;
	}
	i = data->x - (8 / 2); //j = data->y - (8 / 2);
	while(i < data->x - (8 / 2) + 8 - 1)
	{
		j = data->y - (8 / 2);
		while(j < data->y - (8 / 2) + 8 - 1)
		{
			my_mlx_pixel_put(data->mlx, data->win, i, j, create_trgb(1,1,1,1));
			j++;
		}
		i++;
	}
    //mlx_pixel_put(data->mlx, data->win, data->x, data->y, 0xFFFFFF);
	return (NULL);
}

int main(void)
{
    t_data  data;

    data.mlx = mlx_init();
    data.win = mlx_new_window(data.mlx, WIDTH, HEIGHT, "Shoot'em Up");
    data.x = 400; // Position initiale de l'avion
    data.y = 550; // Hauteur de l'avion
    
	input_manag(&data);
    mlx_loop_hook(data.mlx, (void *)update_game, &data);
    mlx_loop(data.mlx);
    return (0);
}
