#include "mn.h"

void		net_calc(t_list *list)
{
  net_calc_el(list);
  net_calc_nib(list);
  net_calc_col(list);
}
