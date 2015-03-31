#include "mn.h"

void		sv_send_all(t_list *list, char *s)
{
  t_pl		*tmp;
  char		*s2;

  /* printf("SV> [#*] @> '%s'\n", chomp(s)); */
  s2 = my_strncat(s, "\n", 1);
  for (tmp = DP; tmp; tmp = tmp->next)
      write(tmp->sock, s2, strlen(s2));
  free(s2);
}
