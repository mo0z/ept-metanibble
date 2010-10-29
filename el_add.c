/*
** el_add.c for  in /u/ept2/jouan_t/code/c/projetx
** 
** Made by thibault jouan
** Login   <jouan_t@epita.fr>
** 
** Started on  Wed May 28 08:01:53 2003 thibault jouan
** Last update Wed May 28 11:13:04 2003 thibault jouan
*/

#include "mn.h"

void		el_add(t_list *list, int num, char alpha, int x, int y)
{
  t_el		*new;
  t_el		*tmp;

  new = malloc(sizeof(*new));
  memset(new, 0, sizeof(*new));
  new->num = num;
  new->alpha = alpha;
  new->x = x;
  new->y = y;
  new->next = 0;
  if (!DE)
    DE = new;
  else
    {
      for (tmp = DE; tmp->next; tmp = tmp->next)
	;
      tmp->next = new;
    }
  /*
  printf("SV> Enregistrement d'un bonus [%d:%c] (%d,%d)\n",
	 num, alpha, x, y);
  */
}
