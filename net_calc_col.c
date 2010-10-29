/*
** net_calc_col.c for  in /u/ept2/jouan_t/code/c/projetx
** 
** Made by thibault jouan
** Login   <jouan_t@epita.fr>
** 
** Started on  Wed May 28 05:04:55 2003 thibault jouan
** Last update Wed May 28 07:53:16 2003 thibault jouan
*/

#include "mn.h"

void		net_calc_col(t_list *list)
{
  t_pl		*cur;
  t_map		*map;
  t_pl		*opl;
  t_ke		*ke;

  for (cur = DP; cur; cur = cur->next)
    {
      if (cur->nib)
	{
	  map = map_get_coord(list, cur->nib->x, cur->nib->y);
	  if ((map->type == 'w') || (map->type == ' '))
	    cur->nib = 0;
	  if (cur->nib)
	    for (opl = DP; opl; opl = opl->next)
	      {
		if (opl->nib && (opl != cur) && cur->nib)
		  {
		    if ((opl->nib->x == cur->nib->x) &&
			(opl->nib->x == cur->nib->y))
		      cur->nib = 0;
		  }
		if (cur->nib && opl->nib)
		  for (ke = opl->nib->ke; ke && cur->nib; ke = ke->next)
		    if ((ke->x == cur->nib->x) && (ke->y == cur->nib->y))
		      cur->nib = 0;
	      }
	}
    }
}
