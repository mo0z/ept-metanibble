/*
** ke_add_start.c for  in /u/ept2/jouan_t/code/c/projetx
** 
** Made by thibault jouan
** Login   <jouan_t@epita.fr>
** 
** Started on  Wed May 28 03:32:14 2003 thibault jouan
** Last update Wed May 28 06:45:24 2003 thibault jouan
*/

#include "mn.h"

void		ke_add_start(t_list *list, t_nib *nib, int px, int py)
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
      tmp = nib->ke;
      nib->ke = new;
      tmp->prev = new;
      new->next = tmp;
    }
  /*
  printf("    - Ajout queue pour nibble [#%d] (%d,%d)\n",
	 nib->id, new->x, new->y);
  */
}
