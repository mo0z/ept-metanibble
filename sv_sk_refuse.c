/*
** sv_sk_refuse.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Sat May 24 01:16:31 2003 StarK
** Last update Sat May 24 01:46:19 2003 StarK
*/

#include "mn.h"

void		sv_sk_refuse(t_list *list, int sock, int i)
{
  printf("  > Refus de la connexion\n");
  write(sock, "NOT WELCOME\n", strlen("NOT WELCOME\n"));
  DS->sk_tab[sock] = 0;
  close(sock);
}
