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
      printf("SV> Client [#%d] supprim�.\n", pl->sock);
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
	  printf("SV> Client [#%d] supprim�.\n", tmp->sock);
	  free(tmp);
	  return;
	}
      old = tmp;
    }
}
