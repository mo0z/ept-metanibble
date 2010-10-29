/*
** nib_add.c for  in /u/ept2/jouan_t/code/c/projetx
** 
** Made by thibault jouan
** Login   <jouan_t@epita.fr>
** 
** Started on  Wed May 21 22:42:19 2003 thibault jouan
** Last update Thu May 29 18:11:35 2003 StarK
*/

#include "mn.h"

void		nib_add(t_list *list, int px, int py, int i)
{
  t_nib		*new;
  t_nib		*tmp;
  int		ppy;

  new = malloc(sizeof(*new));
  memset(new, 0, sizeof(*new));
  new->id = i;
  new->ix = new->x = px;
  new->iy = new->y = py;
  new->dir = 'd';
  new->next = 0;
  if (!DW)
    DW = new;
  else
    {
      for (tmp = DW; tmp->next; tmp = tmp->next)
	;
      tmp->next = new;
    }
  for (ppy = (py + 1); ppy <= (py + 6); ppy++)
    ke_add(list, new, px, ppy);
}
