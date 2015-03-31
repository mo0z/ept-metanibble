#include "mn.h"

void			timer_ajust(struct timeval *t_ref,
				    struct timeval *t_out)
{
  struct timeval	t_cur;
  int			diff;

  gettimeofday(&t_cur, NULL);
  if (t_cur.tv_sec > t_ref->tv_sec)
    diff = (t_cur.tv_usec - t_ref->tv_usec) +
      ((t_cur.tv_sec - t_ref->tv_sec) * 1000000);
  else
    diff = t_cur.tv_usec - t_ref->tv_usec;
  t_out->tv_usec = CYC_LN - (long) diff;
}
