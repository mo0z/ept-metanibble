#include "mn.h"

int		av_check(char **av, char *tok)
{
  int		i;

  for (i = 0; av[i]; i++)
    {
      if (strcmp(av[i], tok) == 0)
	return (1);
    }
  return (0);
}
