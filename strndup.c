/*
** strndup.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Sat May 24 15:36:35 2003 StarK
** Last update Sat May 24 15:39:27 2003 StarK
*/

#include "mn.h"

char		*strndup(char *str, int n)
{
  char		*buf;
  char		*save;
  
  buf = malloc(sizeof(char) * (n + 1));
  save = buf;
  while (n-- && *str)
    *buf++ = *str++;
  *buf = '\0';
  return (save);
}
