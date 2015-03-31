#include "mn.h"

void		cl_xfer_el(t_list *list, char *m)
{
  char		**tab;
  int		i;

  tab = explode("|", m);
  DE = 0;
  for (i = 1; tab[i] && tab[i + 1] && tab[i + 2] && tab[i + 3]; i += 4)
    el_add(list, atoi(tab[i]), tab[i + 1][0],
	   atoi(tab[i + 2]), atoi(tab[i + 3]));
  free(tab);
}
