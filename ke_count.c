/*
** ke_count.c for  in /u/ept2/jouan_t/code/c/projetx
** 
** Made by thibault jouan
** Login   <jouan_t@epita.fr>
** 
** Started on  Wed May 28 11:42:01 2003 thibault jouan
** Last update Wed May 28 11:43:25 2003 thibault jouan
*/

#include "mn.h"

int		ke_count(t_list *list, t_nib *nib)
{
  t_ke		*tmp;
  int		i;

  if (!nib->ke)
    return (0);
  else
    {
      tmp = nib->ke;
      for (i = 1; tmp->next; i++, tmp = tmp->next)
	;
      return (i);
    }
  return (0);
}
