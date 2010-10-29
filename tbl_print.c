/*
** tbl_print.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Sat May 24 15:34:06 2003 StarK
** Last update Sat May 24 15:39:12 2003 StarK
*/

#include "mn.h"

void		tbl_print(char **tbl)
{
  int		i;

  for (i = 0; tbl[i]; i++)
    printf("TBL> [%i] : '%s'\n", i, tbl[i]);
}
