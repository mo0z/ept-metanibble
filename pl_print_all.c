/*
** pl_print_all.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Sat May 24 12:49:04 2003 StarK
** Last update Sat May 24 12:53:06 2003 StarK
*/

#include "mn.h"

void		pl_print_all(t_list *list)
{
  t_pl		*tmp;

  for (tmp = DP; tmp; tmp = tmp->next)
    pl_print(tmp);
}
