/*
** x_bg_refresh.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Mon May 26 04:04:36 2003 StarK
** Last update Tue May 27 17:05:59 2003 thibault jouan
*/

#include "mn.h"

void		x_bg_refresh(t_list *list)
{
  XCopyArea(DX->dpy, DX->bg, DX->buf, DX->gcg,
            0, 0, DI->win_x, DI->win_y, 0, 0);
}
