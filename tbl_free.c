#include "mn.h"

void		tbl_free(char **tbl)
{
  int		i;

  for (i = 0; tbl[i]; i++)
    free(tbl[i]);
}
