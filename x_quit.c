#include "mn.h"

void		x_quit(t_list *list)
{
  XAutoRepeatOn(DX->dpy);
  XDestroyWindow(DX->dpy, DX->win);
  XCloseDisplay(DX->dpy);
  exit(EXIT_SUCCESS);
}
