#include "mn.h"

void		map_add(t_list *list, char c, int px, int py)
{
  t_map		*new;
  t_map		*tmp;

  /* printf("    - Ajout de l'élément '%c' (%d,%d)\n", c, px, py); */
  new = malloc(sizeof(*new));
  memset(new, 0, sizeof(*new));
  new->type = c;
  new->x = px;
  new->y = py;
  new->next = 0;
  if (!DM)
    DM = new;
  else
    {
      for (tmp = DM; tmp->next; tmp = tmp->next)
	;
      tmp->next = new;
    }
}
