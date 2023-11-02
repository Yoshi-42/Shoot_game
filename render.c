#include "shoot.h"



void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (((unsigned int)y % HEIGHT)
			* data->line_length + ((unsigned int)x % WIDTH)
			* (data->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}


void	set_img(t_data *vars)
{
	vars->mlx = mlx_init();
	vars->win = mlx_new_window(vars->mlx, WIDTH, HEIGHT, "Fil de fer!");
	vars->img = malloc(sizeof(t_data));
	vars->img = mlx_new_image(vars->mlx, WIDTH, HEIGHT);
	vars->addr = mlx_get_data_addr(vars->img,
			&(vars->bits_per_pixel), &(vars->line_length),
			&(vars->endian));
}

void	display_black(t_data *vars)
{
	int	i;
	int	j;

	i = 0;
	while (i < HEIGHT)
	{
		j = 0;
		while (j < WIDTH)
		{
			my_mlx_pixel_put(vars->img, j, i, create_trgb(0, 0, 0, 0));
			j++;
		}
		i++;
	}
}

/*int	m_render(t_data *vars)
{
	display_black(vars);
	//glob_input(vars);
	//display_grid_window(vars);
	return (0);
}*/
