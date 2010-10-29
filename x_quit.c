/*
** x_quit.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Sat May 17 16:47:01 2003 StarK
** Last update Tue May 27 16:41:18 2003 thibault jouan
*/

#include "mn.h"

void		x_quit(t_list *list)
{
  XAutoRepeatOn(DX->dpy);
  XDestroyWindow(DX->dpy, DX->win);
  XCloseDisplay(DX->dpy);
  exit(EXIT_SUCCESS);
}
