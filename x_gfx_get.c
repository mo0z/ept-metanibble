#include "mn.h"

t_gfx		*x_gfx_get(t_list *list, char *s)
{
  t_gfx		*tmp;

  for (tmp = DG; tmp; tmp = tmp->next)
    if ((strcmp(s, tmp->type)) == 0)
      return (tmp);
  return (0);
}
