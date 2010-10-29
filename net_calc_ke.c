/*
** net_calc_ke.c for  in /u/ept2/jouan_t/code/c/projetx
** 
** Made by thibault jouan
** Login   <jouan_t@epita.fr>
** 
** Started on  Wed May 28 03:06:02 2003 thibault jouan
** Last update Wed May 28 12:29:42 2003 thibault jouan
*/

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
