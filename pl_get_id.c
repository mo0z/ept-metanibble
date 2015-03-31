#include "mn.h"

t_pl		*pl_get_id(t_list *list, int id)
{
  t_pl		*tmp;

  tmp = DP;
  while (tmp)
    {
      if (tmp->sock == id)
	return (tmp);
      tmp = tmp->next;
    }
  return (0);
}
