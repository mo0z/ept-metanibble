/*
** net_calc_nib_speed.c for  in /u/ept2/jouan_t/code/c/projetx
** 
** Made by thibault jouan
** Login   <jouan_t@epita.fr>
** 
** Started on  Wed May 28 11:55:29 2003 thibault jouan
** Last update Sat Jun 21 21:19:35 2003 StarK
*/

#include "mn.h"

void		net_calc_nib_speed(t_list *list, t_pl *pl)
{
  pl->speed = 24;
  if ((ke_count(list, pl->nib)) >= 6)
    pl->speed = 18;
  if ((ke_count(list, pl->nib)) >= 8)
    pl->speed = 14;
  if ((ke_count(list, pl->nib)) >= 12)
    pl->speed = 10;
  if ((ke_count(list, pl->nib)) >= 16)
    pl->speed = 6;
  if ((ke_count(list, pl->nib)) >= 24)
    pl->speed = 2;
  if ((ke_count(list, pl->nib)) >= 32)
    pl->speed = 1;
}
