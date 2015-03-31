#include "mn.h"

void		map_init(t_list *list)
{
  printf(" >> Initialisation de la map.\n");
  DM = 0;
  if (DI->map_file)
    {
      printf("  > Lecture du fichier de map '%s'\n", DI->map_file);
      map_init_file(list);
    }
  else
    {
      printf("  > G�n�ration d'une map par d�faut.\n");
      map_init_default(list);
    }
}
