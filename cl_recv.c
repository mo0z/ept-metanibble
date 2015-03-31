#include "mn.h"

char		*cl_recv(t_list *list)
{
  char		*msg;

  msg = get_next_line(DC->sock);
  printf("CL> @< '%s'\n", msg);
  return (msg);
}
