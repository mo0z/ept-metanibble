#include "mn.h"

void		sv_sk_deco(t_list *list, int i)
{
  t_pl		*pl;

  DS->sk_tab[i] = 0;
  /*close(i);*/
  printf("SV> Déconnexion du client [#%d]\n", i);
  pl = pl_get_id(list, i);
  if (pl)
    {
      if (pl->nib)
	nib_add(list, pl->nib->x, pl->nib->y, pl->nib->id);
      pl_del(list, pl);
    }
}
