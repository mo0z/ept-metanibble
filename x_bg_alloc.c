/*
** x_bg_alloc.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Mon May 26 03:46:05 2003 StarK
** Last update Wed May 28 02:31:33 2003 thibault jouan
*/

#include "mn.h"

void		x_bg_alloc(t_list *list)
{
  t_map		*map;
  t_gfx		*gfx;
  
  DX->bg = XCreatePixmap(DX->dpy, DX->win, DI->win_x, DI->win_y,
                         DefaultDepth(DX->dpy, DefaultScreen(DX->dpy)));
  DX->buf = XCreatePixmap(DX->dpy, DX->win, DI->win_x, DI->win_y,
			  DefaultDepth(DX->dpy, DefaultScreen(DX->dpy)));
  for (map = DM; map; map = map->next)
    {
      if (map->type == '.')
	gfx = x_gfx_get(list, "sol");
      else if (map->type == 'w')
	gfx = x_gfx_get(list, "mur");
      else if (map->type == ' ')
	gfx = x_gfx_get(list, "vide");
      else
	gfx = x_gfx_get(list, "corps");
      if (gfx)
	Imlib_paste_image(DX->im_id, gfx->im, DX->bg,
			  map->x * UNIT, map->y * UNIT, UNIT, UNIT);
    }
}
