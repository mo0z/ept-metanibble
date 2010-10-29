/*
** sv_xfer_el.c for  in /u/ept2/jouan_t/code/c/projetx
** 
** Made by thibault jouan
** Login   <jouan_t@epita.fr>
** 
** Started on  Wed May 28 08:12:09 2003 thibault jouan
** Last update Wed May 28 08:45:11 2003 thibault jouan
*/

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
