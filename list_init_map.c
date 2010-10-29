/*
** list_init_map.c for  in /u/ept2/jouan_t/code/c/projetx
** 
** Made by thibault jouan
** Login   <jouan_t@epita.fr>
** 
** Started on  Tue May 20 02:47:04 2003 thibault jouan
** Last update Tue May 20 02:53:27 2003 thibault jouan
*/

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
