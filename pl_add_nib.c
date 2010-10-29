/*
** pl_add_nib.c for  in /u/ept2/jouan_t/code/c/projetx
** 
** Made by thibault jouan
** Login   <jouan_t@epita.fr>
** 
** Started on  Mon May 26 23:34:42 2003 thibault jouan
** Last update Tue May 27 00:44:03 2003 thibault jouan
*/

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
