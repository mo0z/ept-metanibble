#include "mn.h"

void		cl_pn_add(t_list *list, char **tab)
{
  t_pn		*new;
  t_pn		*tmp;
  int		i;

  new = malloc(sizeof(*new));
  memset(new, 0, sizeof(*new));
  new->name = tab[2];
  new->dir = tab[4][0];
  new->x = atoi(tab[5]);
  new->y = atoi(tab[6]);
  new->alive = 1;
  new->next = 0;
  if (!DPN)
    DPN = new;
  else
    {
      for (tmp = DPN; tmp->next; tmp = tmp->next)
	;
      tmp->next = new;
    }
  for (i = 7; tab[i] && tab[i + 1]; i += 2)
    cl_pnk_add(list, new, atoi(tab[i]), atoi(tab[i + 1]));
  /* printf("CL> REFRESH (add) [%s] (%d,%d)\n", new->name, new->x, new->y); */
}
