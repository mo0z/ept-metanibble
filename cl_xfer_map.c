#include "mn.h"

void		cl_xfer_map(t_list *list, char *m)
{
  char		**tab;

  tab = explode(" ", m);
  DI->map_x = atoi(tab[1]);
  DI->map_y = atoi(tab[2]);
  free(tab);
}
