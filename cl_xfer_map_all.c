#include "mn.h"

void		cl_xfer_map_all(t_list *list, char *m)
{
  char		**tab;
  int		i;

  /* printf("CL> map_all '%s'\n", m); */
  tab = explode("|", m);
  /* tbl_print(tab); */
  for (i = 0; tab[i + 1] && tab[i + 2] && tab[i + 3]; i += 3)
    map_add(list, tab[i + 1][0], atoi(tab[i + 2]), atoi(tab[i + 3]));
  free(tab);
}
