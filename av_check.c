/*
** av_check.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Mon May 26 02:48:19 2003 StarK
** Last update Mon May 26 02:52:08 2003 StarK
*/

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
