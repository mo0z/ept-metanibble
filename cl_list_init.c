#include "mn.h"

t_list		*cl_list_init(t_list *list2)
{
  t_list	*list;
  t_info	*info;
  t_cl		*cl;

  list = malloc(sizeof(*list));
  memset(list, 0, sizeof(*list));
  DN = list2->net;
  info = malloc(sizeof(*info));
  memset(info, 0, sizeof(*info));
  DI = info;
  cl = malloc(sizeof(*cl));
  memset(cl, 0, sizeof(*cl));
  DC = cl;
  return (list);
}
