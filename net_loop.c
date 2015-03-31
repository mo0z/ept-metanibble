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
