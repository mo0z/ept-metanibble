/*
** list_init_net.c for  in /u/ept2/jouan_t/code/c/projetx
** 
** Made by thibault jouan
** Login   <jouan_t@epita.fr>
** 
** Started on  Tue May 20 02:51:22 2003 thibault jouan
** Last update Mon May 26 02:59:03 2003 StarK
*/

#include "mn.h"

void		list_init_net(t_list *list, char **av)
{
  t_net		*net;
  char		*tmp;

  net = malloc(sizeof(*net));
  DN = net;
  if ((tmp = av_get(av, "-h")) == NULL)
    {
      DN->host = "localhost";
      DN->server = 1;
    }
  else
    {
      DN->host = tmp;
      DN->server = 0;
    }
  if ((tmp = av_get(av, "-p")) != NULL)
    DN->port = atoi(tmp);
  else
    DN->port = DF_PORT;
  if ((tmp = av_get(av, "-n")) != NULL)
    DN->slots = atoi(tmp);
  else
    DN->slots = DF_SLTS;
  if ((tmp = av_get(av, "-P")) != NULL)
    DN->nick = tmp;
  else
    DN->nick = "anonyme";
  if (av_check(av, "-d") && (DN->server == 1))
    DN->server = 2;
}
