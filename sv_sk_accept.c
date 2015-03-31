#include "mn.h"

void		sv_sk_accept(t_list *list, char *m, int sock)
{
  char		**tab;
  t_pl		*pl;

  if ((strncmp(m, "NICK ", strlen("NICK "))) == 0)
    {
      tab = explode(" ", m);
      /*  tbl_print(tab); */
      if (tab[1])
	pl_add(list, sock, tab[1]);
      pl = pl_get_id(list, sock);
      pl_add_nib(list, pl);
      free(tab[0]);
      free(tab);
    }
  if ((strncmp(m, "MAPGET", strlen("MAPGET"))) == 0)
    sv_xfer_map(list, sock);
  if ((strncmp(m, "READY", strlen("READY"))) == 0)
    {
      DS->sk_tab[sock] = 3;
      pl = pl_get_id(list, sock);
      if (pl)
	pl->ready = 1;
    }
}
