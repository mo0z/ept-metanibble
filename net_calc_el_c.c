/*
** net_calc_el_c.c for  in /u/ept2/jouan_t/code/c/projetx
** 
** Made by thibault jouan
** Login   <jouan_t@epita.fr>
** 
** Started on  Wed May 28 12:18:27 2003 thibault jouan
** Last update Wed May 28 12:52:19 2003 thibault jouan
*/

#include "mn.h"

void		net_calc_el_c(t_list *list, t_nib *nib)
{
  int		i;
  t_ke		*ke;

  if (nib->ke)
    {
      for (i = 1; i <= 5; i++)
	{
	  if (nib->ke)
	    {
	      for (ke = nib->ke; ke; ke = ke->next)
		;
	      if (!ke)
		return;
	      if (ke->prev)
		ke->prev->next = 0;
	      free(ke);
	    }
	}
    }
}
