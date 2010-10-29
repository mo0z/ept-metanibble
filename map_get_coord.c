/*
** map_get_coord.c for  in /u/ept2/jouan_t/code/c/metaworm
** 
** Made by thibault jouan
** Login   <jouan_t@epita.fr>
** 
** Started on  Wed Apr 23 22:26:22 2003 thibault jouan
** Last update Thu May 22 18:50:47 2003 thibault jouan
*/

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
