#include "mn.h"

void		cl_auth(t_list *list, char *m)
{
  if ((strcmp(m, "WELCOME")) == 0)
    cl_send(list, my_strncat("NICK ", DN->nick, strlen(DN->nick)));
  else if ((strcmp(m, "NOT WELCOME")) == 0)
    {
      printf("CL> %s\n",
	     "La partie est déjà commencée, prochain essai dans 30 secondes...");
      sleep(30);
      cl_launch(list);
    }
}
