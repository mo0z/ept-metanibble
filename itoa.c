/*
** itoa.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Sun May 25 02:34:21 2003 StarK
** Last update Sun May 25 02:36:51 2003 StarK
*/

#include "mn.h"

char		*itoa(int n)
{
  char		*r;

  r = malloc(32);
  sprintf(r, "%d", n);
  return (r);
}
