#include "mn.h"

void		tbl_print(char **tbl)
{
  int		i;

  for (i = 0; tbl[i]; i++)
    printf("TBL> [%i] : '%s'\n", i, tbl[i]);
}
