#include "mn.h"

int		nib_count(t_list *list)
{
  t_nib		*tmp;
  int		i;

  if (!DW)
    return (0);
  else
    {
      tmp = DW;
      for (i = 1; tmp->next; i++, tmp = tmp->next)
	;
      return (i);
    }
  return (1);
}
