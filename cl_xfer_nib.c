#include "mn.h"

void		cl_xfer_nib(t_list *list, char *m)
{
  char		**tab;

  tab = explode("|", m);
  if (DI->nib_ok == 0)
    {
      cl_pn_add(list, tab);
    }
  else if (DI->nib_ok == 1)
    cl_pn_mod(list, tab);
  free(tab);
}
