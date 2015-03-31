#include "mn.h"

void		cl_send(t_list *list, char *s)
{
  char		*s2;

  /* printf("CL> @> '%s'\n", chomp(s)); */
  s2 = my_strncat(s, "\n", 1);
  write(DC->sock, s2, strlen(s2));
  free(s2);
}
