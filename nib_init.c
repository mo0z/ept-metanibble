#include "mn.h"

void		nib_init(t_list *list)
{
  t_map		*map;
  int		i;

  for (map = DM, i = 0; map; map = map->next)
    {
      if (nib_check_pos(list, map->x, map->y))
	{
	  nib_add(list, map->x, map->y, i);
	  i++;
	}
    }
  if (nib_count(list) < DN->slots)
    {
      printf("  > Impossible de placer tous les nibbles sur cette map.\n");
      exit(EXIT_FAILURE);
    }
  printf("  > Placement OK, [%d/%d] nibbles placés sur la map.\n",
	 nib_count(list), DN->slots);
}
