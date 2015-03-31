#include "mn.h"

void		sv_launch(t_list *list)
{
  printf("SV> Lancement du serveur.\n");
  map_init(list);
  nib_init(list);
  net_init(list);
  net_loop(list);
}
