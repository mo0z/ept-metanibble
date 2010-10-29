/*
** chomp.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Sat May 24 13:59:00 2003 StarK
** Last update Sat May 24 14:04:57 2003 StarK
*/

#include "mn.h"

char		*chomp(char *s)
{
  char		*ret;
  int		i;

  if (s[strlen(s) - 1] != '\n')
    return (s);
  else
    {
      ret = malloc(strlen(s));
      for (i = 0; s[i] && ((i + 1) < strlen(s)); i++)
	ret[i] = s[i];
    }
  ret[i] = '\0';
  return (ret);
}
