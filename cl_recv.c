/*
** cl_recv.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Sat May 24 21:28:13 2003 StarK
** Last update Sun May 25 17:32:35 2003 thibault jouan
*/

#include "mn.h"

/* A virer ? */

char		*cl_recv(t_list *list)
{
  char		*msg;

  msg = get_next_line(DC->sock);
  printf("CL> @< '%s'\n", msg);
  return (msg);
}
