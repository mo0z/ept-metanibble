/*
** sv_send_wall.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Tue May 27 04:19:13 2003 StarK
** Last update Tue May 27 04:59:08 2003 StarK
*/

#include "mn.h"

void		sv_send_wall(t_list *list, char *s)
{
  t_pl		*tmp;

  /*printf("SV> [#*] @> '%s'\n", chomp(s));*/
  for (tmp = DP; tmp; tmp = tmp->next)
      write(tmp->sock, s, strlen(s));
}
