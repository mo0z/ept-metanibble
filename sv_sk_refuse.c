#include "mn.h"

void		sv_sk_refuse(t_list *list, int sock, int i)
{
  printf("  > Refus de la connexion\n");
  write(sock, "NOT WELCOME\n", strlen("NOT WELCOME\n"));
  DS->sk_tab[sock] = 0;
  close(sock);
}
