
#ifndef SHOOT_H
# define SHOOT_H

# include "minilibx/mlx.h"
# include "minilibx/mlx_int.h"
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <math.h>

# define WIDTH 1920
# define HEIGHT 1080

typedef struct s_data {
	void	*mlx;
	void	*win;
	void    *img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	int		x;
	int		y;
}		t_data;

/*typedef struct s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;*/
/*
typedef struct s_vars {
	void	*mlx;
	void	*win;
	t_data	*img;
}	t_vars;*/

//close
int		close_everything(t_data *vars);

//input
int		key_press(int keycode, t_data *vars);
int		input_manag(t_data *vars);

//playermouvement
int		key_hook(int keycode, t_data *data);

//render
void	my_mlx_pixel_put(t_data *data, int x, int y, int color);
void	set_img(t_data *vars);
void	display_black(t_data *vars);

int	create_trgb(int t, int r, int g, int b);
//int	get_color(int x, t_point pt1, t_point pt2)

#endif