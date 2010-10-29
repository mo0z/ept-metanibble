/*
** x_gfx_get.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Mon May 26 03:52:33 2003 StarK
** Last update Mon May 26 04:17:47 2003 StarK
*/

#include "mn.h"

t_gfx		*x_gfx_get(t_list *list, char *s)
{
  t_gfx		*tmp;

  for (tmp = DG; tmp; tmp = tmp->next)
    if ((strcmp(s, tmp->type)) == 0)
      return (tmp);
  return (0);
}
