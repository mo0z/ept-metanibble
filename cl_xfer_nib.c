/*
** cl_xfer_nib.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Tue May 27 04:54:35 2003 StarK
** Last update Wed May 28 01:40:36 2003 thibault jouan
*/

#include "mn.h"

void		cl_xfer_nib(t_list *list, char *m)
{
  char		**tab;

  tab = explode("|", m);
  if (DI->nib_ok == 0)
    {
      cl_pn_add(list, tab);
    }
  else if (DI->nib_ok == 1)
    cl_pn_mod(list, tab);
  free(tab);
}
