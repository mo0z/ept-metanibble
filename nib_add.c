#include "mn.h"

void		nib_add(t_list *list, int px, int py, int i)
{
  t_nib		*new;
  t_nib		*tmp;
  int		ppy;

  new = malloc(sizeof(*new));
  memset(new, 0, sizeof(*new));
  new->id = i;
  new->ix = new->x = px;
  new->iy = new->y = py;
  new->dir = 'd';
  new->next = 0;
  if (!DW)
    DW = new;
  else
    {
      for (tmp = DW; tmp->next; tmp = tmp->next)
	;
      tmp->next = new;
    }
  for (ppy = (py + 1); ppy <= (py + 6); ppy++)
    ke_add(list, new, px, ppy);
}
