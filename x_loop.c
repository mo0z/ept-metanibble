#include "mn.h"

void			x_loop(t_list *list)
{
  fd_set		readf;
  struct timeval	tv;
  XEvent		xev;
	      
  printf(">>> Boucle principale X.\n");
  while (13)
    {
      FD_ZERO(&readf);
      FD_SET(ConnectionNumber(DX->dpy), &readf);
      /*
      tv.tv_sec = 0;
      tv.tv_usec = CYC_SL;
      */
      tv.tv_sec = CYC_LN / 1000000;
      tv.tv_usec = CYC_LN % 1000000;
      if (select(ConnectionNumber(DX->dpy) + 1, &readf, NULL, NULL, &tv) == -1)
	{
	  if (errno == EINTR)
	    continue;
	  perror("select");
	  exit(EXIT_FAILURE);
	}
      if (FD_ISSET(ConnectionNumber(DX->dpy), &readf))
	{
	  if (XPending(DX->dpy))
	    {
	      while ((XNextEvent(DX->dpy, &xev)) == 1)
		;
	      /*XNextEvent(DX->dpy, &xev);*/
	      if (xev.type == Expose)
		x_ev_expose(list);
	      else if (xev.type == KeyPress)
		x_ev_key(list, xev);
	    }
	}
      else
	x_rt(list);
    }
}
