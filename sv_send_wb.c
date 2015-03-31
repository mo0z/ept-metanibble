#include "mn.h"

void		sv_send_wb(int sock, char *s)
{
  /* printf("SV> [#%d] @> '%s'\n", sock, chomp(s)); */
  write(sock, s, strlen(s));
}
