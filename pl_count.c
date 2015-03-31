#include "mn.h"

int		pl_count(t_list *list)
{
  t_pl		*tmp;
  int		i;

  if (!DP)
    return (0);
  else
    {
      tmp = DP;
      for (i = 1; tmp->next; i++, tmp = tmp->next)
	;
      return (i);
    }
  return (1);
}
