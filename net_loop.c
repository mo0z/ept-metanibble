/*
** net_loop.c for  in /u/ept2/jouan_t/code/c/projetx
** 
** Made by thibault jouan
** Login   <jouan_t@epita.fr>
** 
** Started on  Tue May 20 04:52:24 2003 thibault jouan
** Last update Wed May 28 08:10:14 2003 thibault jouan
*/

#include "mn.h"

void		net_loop(t_list *list)
{
  while (13)
    {
      sv_sk_scan(list);
      net_calc(list);
      sv_xfer_nib(list);
      sv_xfer_el(list);
      sv_send_all(list, "REFRESH");
    }
}
