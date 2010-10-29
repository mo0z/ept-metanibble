/*
** av_get.c for  in /u/ept2/jouan_t/code/c/projetx
** 
** Made by thibault jouan
** Login   <jouan_t@epita.fr>
** 
** Started on  Tue May 13 21:59:14 2003 thibault jouan
** Last update Mon May 26 02:49:48 2003 StarK
*/

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
