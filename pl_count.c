/*
** pl_count.c for  in /u/ept2/jouan_t/code/c/projetx
** 
** Made by thibault jouan
** Login   <jouan_t@epita.fr>
** 
** Started on  Thu May 22 18:27:33 2003 thibault jouan
** Last update Thu May 22 18:41:17 2003 thibault jouan
*/

#include "mn.h"

int		pl_count(t_list *list)
{
  t_pl		*tmp;
  int		i;

  if (!DP)
    return (0);
  else
    {
      tmp = DP;
      for (i = 1; tmp->next; i++, tmp = tmp->next)
	;
      return (i);
    }
  return (1);
}
