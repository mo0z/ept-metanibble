/*
** x_gfx_load_png.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Thu May 15 22:35:46 2003 StarK
** Last update Mon May 26 04:52:03 2003 StarK
*/

#include "mn.h"

void		x_gfx_load_png(t_list *list, char *type, char *file)
{
  t_gfx		*new;
  t_gfx		*tmp;

  /*  printf("  > Chargement de l'image '%s'\n", file); */
  new = malloc(sizeof(*new));
  new->type = type;
  new->im = Imlib_load_image(DX->im_id, file);
  new->next = 0;
  if (!DG)
    DG = new;
  else
    {
      for (tmp = DG; tmp->next; tmp = tmp->next)
	;
      tmp->next = new;
    }
}
