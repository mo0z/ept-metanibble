/*
** sv_launch.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Mon May 26 02:50:55 2003 StarK
** Last update Mon May 26 17:41:56 2003 thibault jouan
*/

#include "mn.h"

void		sv_launch(t_list *list)
{
  printf("SV> Lancement du serveur.\n");
  map_init(list);
  nib_init(list);
  net_init(list);
  net_loop(list);
}
