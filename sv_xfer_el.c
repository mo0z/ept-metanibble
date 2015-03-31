#include "mn.h"

void		sv_xfer_el(t_list *list)
{
  t_el		*cur;
  char		buf[2];
  int		i;

  sv_send_wall(list, "EL");
  for (cur = DE, i = 1, buf[0] = 0, buf[1] = 0; cur; cur = cur->next)
    {
      sv_send_wall(list, "|");
      sv_send_wall(list, itoa(cur->num));
      sv_send_wall(list, "|");
      if (cur->alpha == 0)
	buf[0] = 'x';
      else
	buf[0] = cur->alpha;
      sv_send_wall(list, buf);
      sv_send_wall(list, "|");  
      sv_send_wall(list, itoa(cur->x));
      sv_send_wall(list, "|");
      sv_send_wall(list, itoa(cur->y));
      i++;
      if ((i / 32) >= 1)
	{
	  sv_send_wall(list, "\n");
	  sv_send_wall(list, "EL|");
	  i = 1;
	}
    }
  sv_send_wall(list, "\n");
}
