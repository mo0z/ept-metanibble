/*
** cl_xfer_map.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Sun May 25 03:00:44 2003 StarK
** Last update Tue May 27 03:36:02 2003 StarK
*/

#include "mn.h"

void		cl_xfer_map(t_list *list, char *m)
{
  char		**tab;

  tab = explode(" ", m);
  DI->map_x = atoi(tab[1]);
  DI->map_y = atoi(tab[2]);
  free(tab);
}
