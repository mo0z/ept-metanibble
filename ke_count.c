#include "mn.h"

int		ke_count(t_list *list, t_nib *nib)
{
  t_ke		*tmp;
  int		i;

  if (!nib->ke)
    return (0);
  else
    {
      tmp = nib->ke;
      for (i = 1; tmp->next; i++, tmp = tmp->next)
	;
      return (i);
    }
  return (0);
}
