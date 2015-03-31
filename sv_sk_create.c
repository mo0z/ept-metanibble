#include "mn.h"

int			sv_sk_create(int port)
{
  int			sock;
  struct sockaddr_in	address;

  printf("SV> Création socket contact sur le port '%d'\n", port);
  if ((sock = socket(AF_INET, SOCK_STREAM, 0)) == -1)
    {
      printf("SV> Erreur lors de la création de la socket.\n");
      perror("socket");
      exit(EXIT_FAILURE);
    }
  memset(&address, 0, sizeof(struct sockaddr_in));
  address.sin_family = AF_INET;
  address.sin_port = htons(port);
  address.sin_addr.s_addr = htonl(INADDR_ANY);
  if (bind(sock, (struct sockaddr *) &address, sizeof(struct sockaddr))
      == -1)
    {
      printf("SV> Erreur lors de l'association à la socket.\n");
      close(sock);
      perror("bind");
      exit(EXIT_FAILURE);
    }
  return (sock);
}
