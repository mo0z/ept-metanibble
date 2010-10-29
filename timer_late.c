/*
** timer_late.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Tue May 20 09:35:41 2003 StarK
** Last update Tue May 20 17:14:43 2003 StarK
*/

#include "mn.h"

int			timer_late(struct timeval *t_ref)
{
  struct timeval	t_cur;

  gettimeofday(&t_cur, NULL);
  if (t_cur.tv_sec > t_ref->tv_sec)
    {
      if (((t_cur.tv_usec - t_ref->tv_usec) +
	   ((t_cur.tv_sec - t_ref->tv_sec) * 1000000)) >= CYC_LN)
	return (1);
      else
	return (0);
    }
  else if ((t_cur.tv_usec - t_ref->tv_usec) >= CYC_LN)
    return (1);
  else
    return (0);
}
