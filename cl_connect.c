/*
** cl_connect.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Tue May 20 19:38:23 2003 StarK
** Last update Sun May 25 01:14:59 2003 StarK
*/

#include "mn.h"

void			cl_connect(t_list *list)
{
  struct sockaddr_in	address;
  struct hostent	*hostent;

  printf("CL> Connexion en cours sur '%s:%d'\n", DN->host, DN->port);
  if ((DC->sock = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
      printf("    - Impossible de créer la socket cliente.");
      perror("socket");
      exit(EXIT_FAILURE);
    }
  address.sin_family = AF_INET;
  address.sin_port = htons(DN->port);
  if ((hostent = gethostbyname(DN->host)) == NULL)
    {
	  printf("    - Impossible de trouver l'hôte '%s'.\n", DN->host);
	  perror("gethostbyname");
	  exit(EXIT_FAILURE);
    }
  memcpy(&address.sin_addr.s_addr, hostent->h_addr, hostent->h_length);
  if ((connect(DC->sock, (struct sockaddr *)&address,
	      sizeof(struct sockaddr_in))) == -1)
    {
      printf("    - Impossible de se connecter à l'hôte.");
      perror("connect");
      exit(EXIT_FAILURE);
    }
}
