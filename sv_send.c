#include "mn.h"

void		sv_send(int sock, char *s)
{
  char		*s2;
  
  /* printf("SV> [#%d] @> '%s'\n", sock, chomp(s)); */
  s2 = my_strncat(s, "\n", 1);
  write(sock, s2, strlen(s2));
  free(s2);
}
