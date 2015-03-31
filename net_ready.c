#include "mn.h"

int		net_ready(t_list *list)
{
  t_pl		*tmp;
  int		n;

  for (tmp = DP, n = 0; tmp; tmp = tmp->next)
    if (tmp->ready)
	n++;
  if (n == DN->slots)
    return (1);
  else
    return (0);
}
