/*
** cl_send.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Wed May 21 20:24:50 2003 StarK
** Last update Tue May 27 16:47:45 2003 thibault jouan
*/

#include "mn.h"

void		cl_send(t_list *list, char *s)
{
  char		*s2;

  /* printf("CL> @> '%s'\n", chomp(s)); */
  s2 = my_strncat(s, "\n", 1);
  write(DC->sock, s2, strlen(s2));
  free(s2);
}
