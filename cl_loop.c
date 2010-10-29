/*
** cl_loop.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Wed May 21 19:44:20 2003 StarK
** Last update Fri May 30 16:25:00 2003 StarK
*/

#include "mn.h"

void			cl_loop(t_list *list)
{
  fd_set		fd_tab;
  struct timeval	t_out;
  struct timeval	t_ref;
  int			ret;
  char			*m;

  t_out.tv_sec = CYC_LN / 1000000;
  t_out.tv_usec = CYC_LN % 1000000;
  gettimeofday(&t_ref, NULL);
  while (13)
    {
      FD_ZERO(&fd_tab);
      FD_SET(ConnectionNumber(DX->dpy), &fd_tab);
      FD_SET(DC->sock, &fd_tab);
      ret = select(MAX_SL(ConnectionNumber(DX->dpy), DC->sock) + 1, &fd_tab,
		   NULL, NULL, &t_out);
      if (ret == -1)
        {
	  printf("CL> Erreur lors du select.\n");
	  perror("select");
          /* exit(EXIT_FAILURE); */
        }
      if (FD_ISSET(DC->sock, &fd_tab))
	{
	  m = cl_read(list);
	  cl_read_analyse(list, m);
	}
      if (timer_late(&t_ref))
        return;
      if (DI->ref_ok)
	{
	  x_redraw(list);
	  
	}
      if (FD_ISSET(ConnectionNumber(DX->dpy), &fd_tab))
        x_ev(list);
      timer_ajust(&t_ref, &t_out);
    }
}
