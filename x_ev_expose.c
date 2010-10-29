/*
** x_ev_expose.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Sat May 17 23:22:21 2003 StarK
** Last update Tue May 27 16:08:37 2003 thibault jouan
*/

#include "mn.h"

void		x_ev_expose(t_list *list)
{
  /* printf(" >> Evénement 'Expose'\n"); */
  x_redraw(list);
}
