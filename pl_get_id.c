/*
** pl_get_id.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Sat May 24 01:49:08 2003 StarK
** Last update Sat May 24 13:09:38 2003 StarK
*/

#include "mn.h"

t_pl		*pl_get_id(t_list *list, int id)
{
  t_pl		*tmp;

  tmp = DP;
  while (tmp)
    {
      if (tmp->sock == id)
	return (tmp);
      tmp = tmp->next;
    }
  return (0);
}
