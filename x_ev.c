/*
** x_ev.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Mon May 26 03:04:12 2003 StarK
** Last update Mon May 26 03:08:08 2003 StarK
*/

#include "mn.h"

void		x_ev(t_list *list)
{
  XEvent	xev;

  if (XPending(DX->dpy))
    {
      while ((XNextEvent(DX->dpy, &xev)) == 1)
	;
      /*XNextEvent(DX->dpy, &xev);*/
      if (xev.type == Expose)
	x_ev_expose(list);
      else if (xev.type == KeyPress)
	x_ev_key(list, xev);
    }
}
