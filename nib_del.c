#include "mn.h"

void		nib_del(t_list *list, t_nib *nib, int del)
{
  t_nib		*tmp;
  t_nib		*old;

  if (nib == DW)
    {
      if (DW->next)
	DW = DW->next;
      else
	DW = 0;
      printf("SV> Nibble [#%d] supprimé.\n", nib->id);
      if (del)
	free(nib);
      return;
    }
  for (tmp = DW; tmp; tmp = tmp->next)
    {
      if (tmp == nib)
	{
	  if (tmp->next)
	    old->next = tmp->next;
	  else
	    old->next = 0;
	  printf("SV> Nibble [#%d] supprimé.\n", tmp->id);
	  if (del)
	    free(tmp);
	  return;
	}
      old = tmp;
    }
}
