#include "mn.h"

int		main(int ac, char **av)
{
  t_list	*list;

  printf(">>> Metanibble - Lancement en cours.\n");
  list = list_init(av);
  if (DN->server == 1)
    {
      sv_init(list);
      cl_launch(list);
    }
  else if (DN->server == 2)
    sv_launch(list);
  else
    cl_launch(list);
  return (0);
}
