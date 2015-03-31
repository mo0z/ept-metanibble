#include "mn.h"

void		pl_add(t_list *list, int sock, char *name)
{
  t_pl		*new;
  t_pl		*tmp;

  new = malloc(sizeof(*new));
  memset(new, 0, sizeof(*new));
  new->sock = sock;
  new->name = name;
  new->speed = DF_SPD;
  new->next = 0;
  if (!DP)
    DP = new;
  else
    {
      for (tmp = DP; tmp->next; tmp = tmp->next)
	;
      tmp->next = new;
    }
  printf("SV> Enregistrement du joueur [#%d] [%d/%d]\n",
	 sock, pl_count(list), DN->slots);
}
