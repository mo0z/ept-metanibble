#include "mn.h"

void		net_calc_nib(t_list *list)
{
  t_pl		*tmp;

  for (tmp = DP; tmp; tmp = tmp->next)
    {
      if (tmp->nib)
	{
	  net_calc_nib_speed(list, tmp);
	  net_calc_nib_mov(list, tmp);
	}
    }
}
