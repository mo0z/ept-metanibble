#include "mn.h"

void		x_draw_nib(t_list *list)
{
  t_pn		*pn;
  t_ke		*ke;
  t_gfx		*g_tete;
  t_gfx		*g_tete2;
  t_gfx		*g_corps;

  g_tete = x_gfx_get(list, "tete");
  g_tete2 = x_gfx_get(list, "tete2");
  g_corps = x_gfx_get(list, "corps");
  for (pn = DPN; pn; pn = pn->next)
    {
      if (pn->alive)
	{
	  if ((strcmp(DN->nick, pn->name)) == 0)
	    Imlib_paste_image(DX->im_id, g_tete2->im, DX->buf,
			      pn->x * UNIT, pn->y * UNIT, UNIT, UNIT);
	  else
	    Imlib_paste_image(DX->im_id, g_tete->im, DX->buf,
			      pn->x * UNIT, pn->y * UNIT, UNIT, UNIT);
	  for (ke = pn->ke; ke; ke = ke->next)
	    Imlib_paste_image(DX->im_id, g_corps->im, DX->buf,
			      ke->x * UNIT, ke->y * UNIT, UNIT, UNIT);
	}
      pn->alive = 0;
    }
}
