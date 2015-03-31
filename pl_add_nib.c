#include "mn.h"

void			pl_add_nib(t_list *list, t_pl *pl)
{
  int			nb_nib;
  struct timeval	t;
  int			i;
  int			i_nib;
  t_nib			*nib;

  nb_nib = nib_count(list);
  gettimeofday(&t, NULL);
  srand((unsigned int) t.tv_usec);
  i_nib = rand() % nb_nib;
  for (nib = DW, i = 0; nib; nib = nib->next, i++)
    if (i == i_nib)
      {
	pl->nib = nib;
	nib_del(list, nib, 0);
      }
  printf("SV> Nibble [#%d] attribue au joueur [#%d]\n", pl->nib->id, pl->sock);
}
