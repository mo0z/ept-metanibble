/*
** nib_count.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Fri May 23 19:52:45 2003 StarK
** Last update Fri May 23 21:28:06 2003 StarK
*/

#include "mn.h"

int		nib_count(t_list *list)
{
  t_nib		*tmp;
  int		i;

  if (!DW)
    return (0);
  else
    {
      tmp = DW;
      for (i = 1; tmp->next; i++, tmp = tmp->next)
	;
      return (i);
    }
  return (1);
}
