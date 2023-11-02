#include "shoot.h"

int	create_trgb(int t, int r, int g, int b)
{
	int	octet;

	octet = 0;
	octet += b;
	octet += g << 8;
	octet += r << 16;
	octet += t << 24;
	return (octet);
}
