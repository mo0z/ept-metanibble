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
