#include "mn.h"

void		cl_pnk_add(t_list *list, t_pn *pn, int px, int py)
{
  t_ke		*new;
  t_ke		*tmp;

  new = malloc(sizeof(*new));
  memset(new, 0, sizeof(*new));
  new->x = px;
  new->y = py;
  if (!pn->ke)
    pn->ke = new;
  else
    {
      for (tmp = pn->ke; tmp->next; tmp = tmp->next)
	;
      tmp->next = new;
      new->prev = tmp;
    }
  /* printf("CL> REFRESH (pnk_add) [%s] (%d,%d)\n", pn->name, px, py); */
}
