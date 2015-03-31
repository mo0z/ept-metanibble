#include "mn.h"

char		*itoa(int n)
{
  char		*r;

  r = malloc(32);
  sprintf(r, "%d", n);
  return (r);
}
