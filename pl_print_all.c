#include "mn.h"

void		pl_print_all(t_list *list)
{
  t_pl		*tmp;

  for (tmp = DP; tmp; tmp = tmp->next)
    pl_print(tmp);
}
