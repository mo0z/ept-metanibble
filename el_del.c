#include "mn.h"

void		el_del(t_list *list, t_el *el)
{
  t_el		*tmp;
  t_el		*old;

  if (el == DE)
    {
      if (DE->next)
	DE = DE->next;
      else
	DE = 0;
      /*
      printf("SV> Element [%d:%c] (%d,%d) supprime\n",
	     el->num, el->alpha, el->x, el->y);
      */
      free(el);
    }
  for (tmp = DE; tmp; tmp = tmp->next)
    {
      if (tmp == el)
	{
	  if (tmp->next)
	    old->next = tmp->next;
	  else
	    old->next = 0;
	  /*
	  printf("SV> Element [%d:%c] (%d,%d) supprime\n",
		 el->num, el->alpha, el->x, el->y);
	  */
	  free (tmp);
	}
      old = tmp;
    }
}
