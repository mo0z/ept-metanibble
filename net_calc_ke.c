#include "mn.h"

void		net_calc_ke(t_list *list, t_pl *pl)
{
  t_ke          *ke;

  if (pl->nib->ke)
    ke_add_start(list, pl->nib, pl->nib->x, pl->nib->y);
  ke = pl->nib->ke;
  if (pl->nib)
    {
      /* printf("SV-> pl->nib->grow '%d'\n", pl->nib->grow); */
      if (pl->nib->grow > 0)
	pl->nib->grow -= 1;
      else
	{
	  while (ke->next)
	    ke = ke->next;
	  ke->prev->next = 0;
	  free(ke);
	}
    }
}
