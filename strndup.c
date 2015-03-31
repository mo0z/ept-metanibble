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
