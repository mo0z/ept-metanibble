/*
** map_init_default.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Sat May 17 15:24:04 2003 StarK
** Last update Wed May 28 14:09:12 2003 thibault jouan
*/

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
