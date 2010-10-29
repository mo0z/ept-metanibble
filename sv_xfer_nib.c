/*
** cv_xfer_nib.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Tue May 27 04:15:22 2003 StarK
** Last update Wed May 28 06:46:07 2003 thibault jouan
*/

#include "mn.h"

void		sv_xfer_nib(t_list *list)
{
  t_pl		*tmp;
  t_ke		*ke;
  char		buf[2];

  /* printf("SV> Transfert des nibbles\n"); */
  for (tmp = DP, buf[0] = 0, buf[1] = 0; tmp; tmp = tmp->next)
    {
      if (tmp->nib)
	{
	  buf[0] = 'h';
	  sv_send_wall(list, "NIB|0|");
	  sv_send_wall(list, tmp->name);
	  sv_send_wall(list, "|");
	  sv_send_wall(list, "128");
	  sv_send_wall(list, "|");  
	  sv_send_wall(list, buf);
	  sv_send_wall(list, "|");
	  sv_send_wall(list, itoa(tmp->nib->x));
	  sv_send_wall(list, "|");
	  sv_send_wall(list, itoa(tmp->nib->y));
	  if (tmp->nib->ke)
	    {
	      for (ke = tmp->nib->ke; ke; ke = ke->next)
		{
		  /* printf("SV> ke (%d,%d)\n", ke->x, ke->y); */
		  sv_send_wall(list, "|");
		  sv_send_wall(list, itoa(ke->x));
		  sv_send_wall(list, "|");
		  sv_send_wall(list, itoa(ke->y));
		}
	    }
	  sv_send_wall(list, "\n");
	}
    }
}
