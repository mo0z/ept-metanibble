#include "mn.h"

void		sv_xfer_map(t_list *list, int sock)
{
  t_map		*tmp;
  char		buf[2];
  int		j;

  printf("SV> Transfert de la map pour le joueur [#%d]\n", sock);
  sv_send_wb(sock, "MAPSTART ");
  sv_send_wb(sock, itoa(DI->map_x));
  sv_send_wb(sock, " ");
  sv_send_wb(sock, itoa(DI->map_y));
  sv_send_wb(sock, "\n");
  sv_send_wb(sock, "MAPEL|");
  for (tmp = DM, j = 1, buf[0] = 0, buf[1] = 0; tmp;)
    {
      buf[0] = tmp->type;
      sv_send_wb(sock, buf);
      sv_send_wb(sock, "|");
      sv_send_wb(sock, itoa(tmp->x));
      sv_send_wb(sock, "|");
      sv_send_wb(sock, itoa(tmp->y));
      j++;
      if ((j / 64) >= 1)
	{
	  sv_send_wb(sock, "\n");
	  sv_send_wb(sock, "MAPEL|");
	  j = 1;
	}
      else
	sv_send_wb(sock, "|");
      tmp = tmp->next;
    }
  sv_send_wb(sock, "\n");
  sv_send(sock, "MAPEND");
}
