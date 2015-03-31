#include "mn.h"

char		*sv_recv(t_list *list, int sock)
{
  char		*ret;
  int		len;
  int		i;
  char		buf[MSG_LN + 1];

  if ((len = read(sock, buf, MSG_LN)) == -1)
    {
      perror("read");
      printf("SV> Erreur lors de la lecture sur la socket [#%d]\n", sock);
      sv_sk_deco(list, sock);
      /* exit(EXIT_FAILURE); */
    }
  if (len == 0)
    return (0);
  ret = malloc(len + 1);
  for (i = 0; ((i + 1) <= len) && (buf[i] != '\n'); i++)
    ret[i] = buf[i];
  ret[i] = '\0';
  /* printf("SV> [#%d] @< '%s'\n", sock, ret); */
  return (ret);
}
  /*
  char		*m;

  m = get_next_line(sock);
  return (m);
  */
