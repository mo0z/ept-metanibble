/*
** net_calc.c for  in /u/ept2/jouan_t/code/c/projetx
** 
** Made by thibault jouan
** Login   <jouan_t@epita.fr>
** 
** Started on  Tue May 27 17:15:54 2003 thibault jouan
** Last update Wed May 28 10:55:15 2003 thibault jouan
*/

#include "mn.h"

void		net_calc(t_list *list)
{
  net_calc_el(list);
  net_calc_nib(list);
  net_calc_col(list);
}
