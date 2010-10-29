/*
** sv_send.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Sat May 24 13:54:13 2003 StarK
** Last update Wed May 28 11:57:24 2003 thibault jouan
*/

#include "mn.h"

void		sv_send(int sock, char *s)
{
  char		*s2;
  
  /* printf("SV> [#%d] @> '%s'\n", sock, chomp(s)); */
  s2 = my_strncat(s, "\n", 1);
  write(sock, s2, strlen(s2));
  free(s2);
}
