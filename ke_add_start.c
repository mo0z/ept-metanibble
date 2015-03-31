#include "mn.h"

void		ke_add_start(t_list *list, t_nib *nib, int px, int py)
{
  t_ke		*new;
  t_ke		*tmp;

  new = malloc(sizeof(*new));
  memset(new, 0, sizeof(*new));
  new->x = px;
  new->y = py;
  if (!nib->ke)
    nib->ke = new;
  else
    {
      tmp = nib->ke;
      nib->ke = new;
      tmp->prev = new;
      new->next = tmp;
    }
  /*
  printf("    - Ajout queue pour nibble [#%d] (%d,%d)\n",
	 nib->id, new->x, new->y);
  */
}
