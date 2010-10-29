/*
** sv_sk_scan.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Tue May 20 07:39:18 2003 StarK
** Last update Mon May 26 00:13:36 2003 thibault jouan
*/

#include "mn.h"

void			sv_sk_scan(t_list *list)
{
  struct timeval	t_out;
  struct timeval	t_ref;
  int			ret;
  int			i;

  t_out.tv_sec = CYC_LN / 1000000;
  t_out.tv_usec = CYC_LN % 1000000;
  /*  printf("  > t_out '%d,%d'.\n", (int)t_out.tv_sec, (int)t_out.tv_usec); */
  gettimeofday(&t_ref, NULL);
  while (13)
    {
      FD_ZERO(&DS->fd_tab);
      for (i = 0; i < 64; ++i)
	if (DS->sk_tab[i] == 1 || DS->sk_tab[i] == 2 || DS->sk_tab[i] == 3)
	  FD_SET(i, &DS->fd_tab);
      ret = select(PL_MAX, &DS->fd_tab, NULL, NULL, &t_out);
      if (ret == -1)
	{
	  printf("SV> Erreur lors du select.\n");
	  perror("select");
	  exit(EXIT_FAILURE);
	}
      if (ret > 0)
	{
	  net_read(list);
	}
      if (timer_late(&t_ref))
	return;
      timer_ajust(&t_ref, &t_out);
    }
}
