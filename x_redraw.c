/*
** x_redraw.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Tue May 27 04:38:44 2003 StarK
** Last update Fri May 30 16:24:44 2003 StarK
*/

#include "mn.h"

void		x_redraw(t_list *list)
{
  x_bg_refresh(list);
  x_draw_el(list);
  x_draw_nib(list);
  XCopyArea(DX->dpy, DX->buf, DX->win, DX->gcg,
	    0, 0, DI->win_x, DI->win_y, 0, 0);
  XFlush(DX->dpy);
  DI->ref_ok = 0;
}
