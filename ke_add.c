/*
** ke_add.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Tue May 27 20:54:58 2003 StarK
** Last update Wed May 28 03:38:40 2003 thibault jouan
*/

#include "mn.h"

void		ke_add(t_list *list, t_nib *nib, int px, int py)
{
  t_ke		*new;
  t_ke		*tmp;

  new = malloc(sizeof(*new));
  memset(new, 0, sizeof(*new));
  new->x = px;
  new->y = py;
  if (!nib->ke)
    nib->ke = new;
  else
    {
      for (tmp = nib->ke; tmp->next; tmp = tmp->next)
	;
      tmp->next = new;
      new->prev = tmp;
    }
  /*
  printf("    - Ajout queue pour nibble [#%d] (%d,%d)\n",
	 nib->id, new->x, new->y);
  */
}
