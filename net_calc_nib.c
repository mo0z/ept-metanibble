/*
** net_calc_nib.c for  in /u/ept2/jouan_t/code/c/projetx
** 
** Made by thibault jouan
** Login   <jouan_t@epita.fr>
** 
** Started on  Wed May 28 03:03:17 2003 thibault jouan
** Last update Wed May 28 14:13:23 2003 thibault jouan
*/

#include "mn.h"

void		net_calc_nib(t_list *list)
{
  t_pl		*tmp;

  for (tmp = DP; tmp; tmp = tmp->next)
    {
      if (tmp->nib)
	{
	  net_calc_nib_speed(list, tmp);
	  net_calc_nib_mov(list, tmp);
	}
    }
}
