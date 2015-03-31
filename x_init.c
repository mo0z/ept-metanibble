#include "mn.h"

void		x_init(t_list *list)
{
  t_xd		*xd;

  printf(">>> Initialisation de l'interface graphique.\n");
  xd = malloc(sizeof(*xd));
  DX = xd;
  x_open(list);
  x_gfx_load(list);
}
