/*
** explode.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Sat May 24 15:30:15 2003 StarK
** Last update Sat May 24 15:30:22 2003 StarK
*/

#include "mn.h"

char    *get_begin(char *s, char *token)
{
  while (*s && *s == *token)
    s++;
  return (s);
}

char    *get_end(char *s, char *token)
{
  while (*s && *s != *token)
    s++;
  return (s);
}

char    **explode(char *token, char *str)
{
  char  *s;
  char  *fin;
  int   count;
  char  **tabcmd;
  
  if (!str)
    return (0);
  for (s = get_begin(str, token), count = 0; *s; count++)
    {
      s = get_end(s, token);
      s = get_begin(s, token);
    }
  tabcmd = malloc((count + 1) * sizeof(char *));
  for (s = get_begin(str, token), count = 0; *s; count++)
    {
      fin = get_end(s, token);
      tabcmd[count] = strndup(s, fin - s);
      s = fin;
      s = get_begin(s, token);
    }
  tabcmd[count] = 0;
  return (tabcmd);
}
