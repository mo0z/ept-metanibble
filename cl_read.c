/*
** cl_read.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Sat May 24 21:17:59 2003 StarK
** Last update Wed May 28 12:14:19 2003 thibault jouan
*/

#include "mn.h"

char		*cl_read(t_list *list)
{
  char		*m;

  m = get_next_line(DC->sock);
  if (m == 0)
    {
      printf("CL> Perte de la connexion au serveur.\n");
      exit(EXIT_FAILURE);
    }
  else
    {
      /* printf("CL> @< '%s'\n", m); */
      return (m);
    }
}
