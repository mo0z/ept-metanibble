/*
** map_add.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Sat May 17 16:08:39 2003 StarK
** Last update Mon May 26 18:36:21 2003 thibault jouan
*/

#include "mn.h"

void		map_add(t_list *list, char c, int px, int py)
{
  t_map		*new;
  t_map		*tmp;

  /* printf("    - Ajout de l'élément '%c' (%d,%d)\n", c, px, py); */
  new = malloc(sizeof(*new));
  memset(new, 0, sizeof(*new));
  new->type = c;
  new->x = px;
  new->y = py;
  new->next = 0;
  if (!DM)
    DM = new;
  else
    {
      for (tmp = DM; tmp->next; tmp = tmp->next)
	;
      tmp->next = new;
    }
}
