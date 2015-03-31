#include "mn.h"

void		x_ev_expose(t_list *list)
{
  /* printf(" >> Evénement 'Expose'\n"); */
  x_redraw(list);
}
