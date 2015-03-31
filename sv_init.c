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
