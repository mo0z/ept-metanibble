#include "mn.h"

void			cl_connect(t_list *list)
{
  struct sockaddr_in	address;
  struct hostent	*hostent;

  printf("CL> Connexion en cours sur '%s:%d'\n", DN->host, DN->port);
  if ((DC->sock = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
      printf("    - Impossible de cr�er la socket cliente.");
      perror("socket");
      exit(EXIT_FAILURE);
    }
  address.sin_family = AF_INET;
  address.sin_port = htons(DN->port);
  if ((hostent = gethostbyname(DN->host)) == NULL)
    {
	  printf("    - Impossible de trouver l'h�te '%s'.\n", DN->host);
	  perror("gethostbyname");
	  exit(EXIT_FAILURE);
    }
  memcpy(&address.sin_addr.s_addr, hostent->h_addr, hostent->h_length);
  if ((connect(DC->sock, (struct sockaddr *)&address,
	      sizeof(struct sockaddr_in))) == -1)
    {
      printf("    - Impossible de se connecter � l'h�te.");
      perror("connect");
      exit(EXIT_FAILURE);
    }
}
