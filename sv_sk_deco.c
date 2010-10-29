/*
** sv_sk_deco.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Tue May 20 18:49:59 2003 StarK
** Last update Wed May 28 05:50:28 2003 thibault jouan
*/

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
