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
