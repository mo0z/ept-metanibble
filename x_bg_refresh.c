#include "mn.h"

void		x_bg_refresh(t_list *list)
{
  XCopyArea(DX->dpy, DX->bg, DX->buf, DX->gcg,
            0, 0, DI->win_x, DI->win_y, 0, 0);
}
