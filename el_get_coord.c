#include "mn.h"

t_el		*el_get_coord(t_list *list, int x, int y)
{
  t_el		*tmp;

  for (tmp = DE; tmp; tmp = tmp->next)
    {
      if ((tmp->x == x) && (tmp->y == y))
	{
	  /*
	  printf("SV> Verification de (%d,%d) avec (%d,%d) OK\n",
		 x, y, tmp->x, tmp->y);
	  */
	  return (tmp);
	}
    }
  return (0);
}
