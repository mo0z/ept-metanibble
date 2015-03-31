#include "mn.h"

void		sv_send_wall(t_list *list, char *s)
{
  t_pl		*tmp;

  /*printf("SV> [#*] @> '%s'\n", chomp(s));*/
  for (tmp = DP; tmp; tmp = tmp->next)
      write(tmp->sock, s, strlen(s));
}
