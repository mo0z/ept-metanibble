/*
** pl_del.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Sat May 24 13:26:34 2003 StarK
** Last update Tue May 27 04:03:19 2003 StarK
*/

#include "mn.h"

void		pl_del(t_list *list, t_pl *pl)
{
  t_pl		*tmp;
  t_pl		*old;

  if (pl == DP)
    {
      if (DP->next)
	DP = DP->next;
      else
	DP = 0;
      printf("SV> Client [#%d] supprimé.\n", pl->sock);
      free(pl);
      return;
    }
  for (tmp = DP; tmp; tmp = tmp->next)
    {
      if (tmp == pl)
	{
	  if (tmp->next)
	    old->next = tmp->next;
	  else
	    old->next = 0;
	  printf("SV> Client [#%d] supprimé.\n", tmp->sock);
	  free(tmp);
	  return;
	}
      old = tmp;
    }
}
