/*
** x_draw_el.c for  in /u/ept2/jouan_t/code/c/projetx
** 
** Made by thibault jouan
** Login   <jouan_t@epita.fr>
** 
** Started on  Wed May 28 08:54:26 2003 thibault jouan
** Last update Wed May 28 10:14:12 2003 thibault jouan
*/

#include "mn.h"

void		x_draw_el(t_list *list)
{
  t_el		*cur;
  char		buf[2];
  t_gfx		*gfx;

  for (cur = DE, buf[0] = 0, buf[1] = 0; cur; cur = cur->next)
    {
      if (cur->alpha != 'x')
	{
	  buf[0] = cur->alpha;
	  gfx = x_gfx_get(list, buf);
	}
      else
	  gfx = x_gfx_get(list, itoa(cur->num));
      if (gfx)
	Imlib_paste_image(DX->im_id, gfx->im, DX->buf,
			  cur->x * UNIT, cur->y * UNIT, UNIT, UNIT);
    }
}
