/*
** tbl_free.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Sat May 24 15:35:08 2003 StarK
** Last update Sat May 24 15:39:03 2003 StarK
*/

#include "mn.h"

void		tbl_free(char **tbl)
{
  int		i;

  for (i = 0; tbl[i]; i++)
    free(tbl[i]);
}
