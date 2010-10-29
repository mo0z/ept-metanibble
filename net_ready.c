/*
** net_ready.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Mon May 26 12:51:50 2003 StarK
** Last update Mon May 26 12:54:53 2003 StarK
*/

#include "mn.h"

int		net_ready(t_list *list)
{
  t_pl		*tmp;
  int		n;

  for (tmp = DP, n = 0; tmp; tmp = tmp->next)
    if (tmp->ready)
	n++;
  if (n == DN->slots)
    return (1);
  else
    return (0);
}
