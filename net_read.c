#include "mn.h"

void		net_read(t_list *list)
{
  int		i;
  char		*m;

  for (i = 3; i < 64; ++i)
    if (FD_ISSET(i, &DS->fd_tab))
      {
	if (DS->sk_tab[i] == 1)
	  sv_sk_conx(list, i);
	else
	  {
	    m = sv_recv(list, i);
	    /* printf("SV> [#%d] @< '%s'\n", i, m); */
	    if (m == 0)
	      sv_sk_deco(list, i);
	    else
	      {
		if (DS->sk_tab[i] == 2)
		  sv_sk_accept(list, m, i);
		else if (DS->sk_tab[i] == 3)
		  net_read_analyse(list, m, i);
	      }
	  }
      }
}
