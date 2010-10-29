/*
** sv_init.c for  in /u/ept2/jouan_t/code/c/projetx
** 
** Made by thibault jouan
** Login   <jouan_t@epita.fr>
** 
** Started on  Tue May 20 04:37:48 2003 thibault jouan
** Last update Mon May 26 02:51:33 2003 StarK
*/

#include "mn.h"

void		sv_init(t_list *list)
{
  pid_t		pid;

  usleep(200000);
  signal(SIGCHLD, SIG_IGN);
  pid = fork();
  if (pid == -1)
    {
      perror("fork");
      printf(">>> Impossible de lancer le serveur.\n");
      exit(EXIT_FAILURE);
    }
  if (pid == 0)
    sv_launch(list);
  sleep(4);
}
