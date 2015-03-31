#include "mn.h"

void		net_init(t_list *list)
{
  t_sv		*sv;

  sv = malloc(sizeof(*sv));
  DS = sv;
  DS->sk_contact = sv_sk_create(DN->port);
  listen(DS->sk_contact, PL_MAX);
  memset(DS->sk_tab, 0, (PL_MAX + 1) * sizeof(int));
  DS->sk_tab[DS->sk_contact] = 1;
  DP = 0;
  while (!net_ready(list))
    sv_sk_scan(list);
  printf("SV> Debut de la partie\n");
  DI->start = 1;
  sv_send_all(list, "START");
}
