#include "mn.h"

void		net_calc_el(t_list *list)
{
  t_pl		*cur;
  t_el		*el;

  for (cur = DP; cur; cur = cur->next)
    {
      if (cur->nib)
	{
	  el = el_get_coord(list, cur->nib->x, cur->nib->y);
	  if (el)
	    {
	      /*
	      printf("SV> EL [%d:%c] (%d,%d)\n",
	      el->num, el->alpha, el->x, el->y);*/
	      if (el->num)
		cur->nib->grow += el->num;
	      /*
	      else if (el->alpha == 'C')
		net_calc_el_c(list, cur->nib);
	      */
	      el_del(list, el);
	    }
	}
    }
}
