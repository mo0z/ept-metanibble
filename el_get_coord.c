/*
** el_get_coord.c for  in /u/ept2/jouan_t/code/c/projetx
** 
** Made by thibault jouan
** Login   <jouan_t@epita.fr>
** 
** Started on  Wed May 28 10:29:06 2003 thibault jouan
** Last update Wed May 28 14:13:57 2003 thibault jouan
*/

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
