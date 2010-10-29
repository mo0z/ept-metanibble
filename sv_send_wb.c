/*
** sv_send_wb.c for  in /u/ept2/jouan_t/code/c/projetx
** 
** Made by thibault jouan
** Login   <jouan_t@epita.fr>
** 
** Started on  Sun May 25 17:10:51 2003 thibault jouan
** Last update Sun May 25 17:17:52 2003 thibault jouan
*/

#include "mn.h"

void		sv_send_wb(int sock, char *s)
{
  /* printf("SV> [#%d] @> '%s'\n", sock, chomp(s)); */
  write(sock, s, strlen(s));
}
