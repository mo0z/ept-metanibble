/*
** main.c for  in /u/ept2/jouan_t/code/c/projetx
** 
** Made by thibault jouan
** Login   <jouan_t@epita.fr>
** 
** Started on  Mon May 12 00:10:18 2003 thibault jouan
** Last update Wed Jun 25 17:58:59 2003 StarK
*/

#include "mn.h"

int		main(int ac, char **av)
{
  t_list	*list;

  printf(">>> Metanibble - Lancement en cours.\n");
  list = list_init(av);
  if (DN->server == 1)
    {
      sv_init(list);
      cl_launch(list);
    }
  else if (DN->server == 2)
    sv_launch(list);
  else
    cl_launch(list);
  return (0);
}
