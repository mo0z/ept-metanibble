#include "mn.h"

void		cl_read_analyse(t_list *list, char *m)
{
  if ((strncmp(m, "NIB", strlen("NIB"))) == 0)
    cl_xfer_nib(list, m);
  if ((strncmp(m, "EL", strlen("EL"))) == 0)
    cl_xfer_el(list, m);
  else if ((strncmp(m, "REFRESH", strlen("REFRESH"))) == 0)
    {
      DI->nib_ok = 1;
      DI->ref_ok = 1;
    }
}
