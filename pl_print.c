/*
** pl_print.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Sat May 24 12:49:27 2003 StarK
** Last update Sat May 24 13:15:51 2003 StarK
*/

#include "mn.h"

void		pl_print(t_pl *pl)
{
  printf("SV> Joueur '%s', sock : [#%d]\n", pl->name, pl->sock);
}
