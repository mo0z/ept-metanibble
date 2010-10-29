/*
** cl_launch.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Tue May 20 19:33:38 2003 StarK
** Last update Wed May 28 02:44:16 2003 thibault jouan
*/

#include "mn.h"

void		cl_launch(t_list *list2)
{
  t_list	*list;

  printf("CL> Lancement du client.\n");
  list = cl_list_init(list2);
  cl_connect(list);
  while (DI->start == 0)
    {
      cl_xfer(list);
      if (DI->map_ok == 0)
	{
	  cl_send(list, "MAPGET");
	  DI->map_ok = 1;
	}
      /*
      else if (DI->map_ok == 3 && DI->nib_ok == 0)
	{
	  cl_send(list, "NIBGET");
	  DI->nib_ok = 1;
	}
      else if (DI->nib_ok == 1)
	DI->start = 1;
      */
      else if (DI->map_ok == 3)
	DI->start = 1;
    }
  printf("CL> Debut de la partie\n");
  x_init(list);
  x_bg_alloc(list);
  x_redraw(list);
  sleep(1);
  cl_send(list, "READY");
  while (13)
    cl_loop(list);
}
