#include "mn.h"

void		net_calc_nib_speed(t_list *list, t_pl *pl)
{
  pl->speed = 24;
  if ((ke_count(list, pl->nib)) >= 6)
    pl->speed = 18;
  if ((ke_count(list, pl->nib)) >= 8)
    pl->speed = 14;
  if ((ke_count(list, pl->nib)) >= 12)
    pl->speed = 10;
  if ((ke_count(list, pl->nib)) >= 16)
    pl->speed = 6;
  if ((ke_count(list, pl->nib)) >= 24)
    pl->speed = 2;
  if ((ke_count(list, pl->nib)) >= 32)
    pl->speed = 1;
}
