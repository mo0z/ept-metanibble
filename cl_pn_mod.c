#include "mn.h"

void		cl_pn_mod(t_list *list, char **tab)
{
  t_pn		*tmp;
  t_ke		*ke;
  t_ke		*oke;
  int		i;
  
  for (tmp = DPN; tmp; tmp = tmp->next)
    if ((strcmp(tab[2], tmp->name)) == 0)
      {
	tmp->dir = tab[4][0];
	tmp->x = atoi(tab[5]);
	tmp->y = atoi(tab[6]);
	tmp->alive = 1;
	for (ke = tmp->ke; ke; oke = ke, ke = ke->next)
	  if (ke->prev)
	    free(ke->prev);
	if (oke)
	  free(oke);
	tmp->ke = 0;
	for (i = 7; tab[i] && tab[i + 1]; i += 2)
	  cl_pnk_add(list, tmp, atoi(tab[i]), atoi(tab[i + 1]));
	/* printf("CL> REFRESH (mod) [%s] (%d,%d)\n", tmp->name, tmp->x, tmp->y); */
      }
}
