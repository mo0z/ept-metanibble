/*
** my_strncat.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Fri May 23 19:33:03 2003 StarK
** Last update Sun May 25 16:26:14 2003 thibault jouan
*/

#include "mn.h"

char		*my_strncat(char *s1, char *s2, int len)
{
  char		*r;
  int		i;
  int		j;

  r = malloc(strlen(s1) + strlen(s2) + 1);
  for (i = 0, j = 0; s1[i]; i++, j++)
    r[j] = s1[i];
  for (i = 0; s2[i] && ((i + 1) <= len); i++, j++)
    r[j] = s2[i];
  r[j] = 0;
  /* free(s1); */
  return (r);
}
