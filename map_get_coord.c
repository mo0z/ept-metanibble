#include "mn.h"

t_map		*map_get_coord(t_list *list, int x, int y)
{
  t_map		*tmp;

  tmp = DM;
  while (tmp)
    {
      if (tmp->x == x && tmp->y == y)
	return (tmp);
      tmp = tmp->next;
    }
  return (0);
}
