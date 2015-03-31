#include "mn.h"

char		*av_get(char **av, char *tok)
{
  int		i;

  for (i = 0; av[i]; i++)
    {
      if (strcmp(av[i], tok) == 0)
	if (av[i + 1])
	  return (av[i + 1]);
    }
  return (0);
}
