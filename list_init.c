/*
** list_init.c for  in /u/ept2/jouan_t/code/c/projetx
** 
** Made by thibault jouan
** Login   <jouan_t@epita.fr>
** 
** Started on  Tue May 13 21:37:42 2003 thibault jouan
** Last update Mon May 26 02:57:07 2003 StarK
*/

#include "mn.h"

t_list		*list_init(char **av)
{
  t_list	*list;
  t_info	*info;

  list = malloc(sizeof(*list));
  info = malloc(sizeof(*info));
  memset(list, 0, sizeof(*list));
  memset(info, 0, sizeof(*info));
  DI = info;
  list_init_map(list, av);
  list_init_net(list, av);
  if (DN->server == 1 || DN->server == 2)
    {
      if (DN->server == 1)
	printf(">>> Partie en mode serveur.\n");
      else if (DN->server == 2)
	printf(">>> Partie en mode serveur dédié.\n");
      printf("    - '%d' client(s) attendus.\n", DN->slots);
      printf("    - '%d' cycles par seconde, '%d' µs par cycle.\n",
	     CYC_PS, CYC_LN);
    }
  else
    printf(">>> Partie en mode client (serveur sur '%s:%d').\n",
	   DN->host, DN->port);
  return (list);
}
