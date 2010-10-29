/*
** map_init.c for  in /u/ept2/jouan_t/code/c/projetx
** 
** Made by thibault jouan
** Login   <jouan_t@epita.fr>
** 
** Started on  Tue May 13 22:18:32 2003 thibault jouan
** Last update Sun May 18 00:19:05 2003 StarK
*/

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
      printf("  > Génération d'une map par défaut.\n");
      map_init_default(list);
    }
}
