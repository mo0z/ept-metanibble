#include "mn.h"

void		net_calc_el_c(t_list *list, t_nib *nib)
{
  int		i;
  t_ke		*ke;

  if (nib->ke)
    {
      for (i = 1; i <= 5; i++)
	{
	  if (nib->ke)
	    {
	      for (ke = nib->ke; ke; ke = ke->next)
		;
	      if (!ke)
		return;
	      if (ke->prev)
		ke->prev->next = 0;
	      free(ke);
	    }
	}
    }
}
