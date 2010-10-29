/*
** cl_pnk_add.c for  in /u/ept2/jouan_t/code/c/projetx
** 
** Made by thibault jouan
** Login   <jouan_t@epita.fr>
** 
** Started on  Wed May 28 01:48:50 2003 thibault jouan
** Last update Wed May 28 02:41:10 2003 thibault jouan
*/

#include "mn.h"

void		cl_pnk_add(t_list *list, t_pn *pn, int px, int py)
{
  t_ke		*new;
  t_ke		*tmp;

  new = malloc(sizeof(*new));
  memset(new, 0, sizeof(*new));
  new->x = px;
  new->y = py;
  if (!pn->ke)
    pn->ke = new;
  else
    {
      for (tmp = pn->ke; tmp->next; tmp = tmp->next)
	;
      tmp->next = new;
      new->prev = tmp;
    }
  /* printf("CL> REFRESH (pnk_add) [%s] (%d,%d)\n", pn->name, px, py); */
}
