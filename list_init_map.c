#include "mn.h"

void		list_init_map(t_list *list, char **av)
{
  char		*tmp;

  if ((tmp = av_get(av, "-m")) != NULL)
    DI->map_file = tmp;
  else
    {
      DI->map_file = 0;
      DI->map_x = MAP_X;
      DI->map_y = MAP_Y;
      DI->pos_x = POS_X;
      DI->pos_y = POS_Y;
    }
}
