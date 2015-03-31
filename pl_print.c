#include "mn.h"

void		pl_print(t_pl *pl)
{
  printf("SV> Joueur '%s', sock : [#%d]\n", pl->name, pl->sock);
}
