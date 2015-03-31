#include "mn.h"

void		net_calc_nib_mov(t_list *list, t_pl *tmp)
{
  if (tmp->sp_cyc >= tmp->speed)
    {
      net_calc_ke(list, tmp);
      if ((tmp->nib->dir == 'g') && (tmp->nib->odir == 'd'))
	tmp->nib->dir = tmp->nib->odir;
      if ((tmp->nib->dir == 'd') && (tmp->nib->odir == 'g'))
	tmp->nib->dir = tmp->nib->odir;
      if ((tmp->nib->dir == 'b') && (tmp->nib->odir == 'h'))
	tmp->nib->dir = tmp->nib->odir;
      if ((tmp->nib->dir == 'h') && (tmp->nib->odir == 'b'))
	tmp->nib->dir = tmp->nib->odir;
      if (tmp->nib->dir == 'g')
	tmp->nib->x -= 1;
      else if (tmp->nib->dir == 'd')
	tmp->nib->x += 1;
      else if (tmp->nib->dir == 'b')
	tmp->nib->y += 1;
      else if (tmp->nib->dir == 'h')
	tmp->nib->y -= 1;
      tmp->sp_cyc = 0;
      tmp->nib->odir = tmp->nib->dir;
    }
  tmp->sp_cyc += 1;
}
