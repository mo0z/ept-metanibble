/*
** net_init.c for  in /u/ept2/jouan_t/code/c/projetx
** 
** Made by thibault jouan
** Login   <jouan_t@epita.fr>
** 
** Started on  Tue May 20 04:52:02 2003 thibault jouan
** Last update Wed May 28 05:29:20 2003 thibault jouan
*/

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
