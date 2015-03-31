#include "mn.h"

void		map_init_default(t_list *list)
{
  int		x;
  int		y;

  DI->map_x = DF_MX;
  DI->map_y = DF_MY;
  for (y = 0; y <= (DF_MY - 1); y++)
    for (x = 0; x <= (DF_MX - 1); x++)
      {
	if ((x == 0) || (x == (DF_MX - 1)) ||
	    (y == 0) || (y == (DF_MY - 1)))
	  map_add(list, 'w', x, y);
	else
	  map_add(list, '.', x, y);
      }
  printf("  > Map générée, et de taille (%d,%d)\n", DI->map_x, DI->map_y);
}
