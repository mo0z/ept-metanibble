/*
** x_init.c for  in /u/ept2/jouan_t/code/c/projetx
** 
** Made by thibault jouan
** Login   <jouan_t@epita.fr>
** 
** Started on  Tue May 13 22:20:18 2003 thibault jouan
** Last update Mon May 26 17:47:12 2003 thibault jouan
*/

#include "mn.h"

void		x_init(t_list *list)
{
  t_xd		*xd;

  printf(">>> Initialisation de l'interface graphique.\n");
  xd = malloc(sizeof(*xd));
  DX = xd;
  x_open(list);
  x_gfx_load(list);
}
