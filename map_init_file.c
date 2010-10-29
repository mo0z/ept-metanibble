/*
** map_init_file.c for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Sat May 17 15:23:36 2003 StarK
** Last update Wed May 28 10:19:44 2003 thibault jouan
*/

#include "mn.h"

void		map_init_file(t_list *list)
{
  int		px;
  int		py;
  int		sx;
  int		fd;
  char		c;

  sx = 0;
  if ((fd = open(DI->map_file, O_RDONLY)) == -1)
    {
      printf("    - Impossible d'ouvrir le fichier '%s'\n", DI->map_file);
      exit(EXIT_FAILURE);
    }
  for (px = 0, py = 0; read(fd, &c, 1); px++)
    {
      sx = px;
      if (c == '\n')
	{
	  py++;
	  px = -1;
	}
      else if ((c >= '1' && c <= '9') || (c >= 'A' && c <= 'G'))
	{
	  if (c >= '1' && c <= '9')
	    el_add(list, (int)c - 48, 0, px, py);
	  else if (c >= 'A' && c <= 'G')
	    el_add(list, 0, c, px, py);
	  map_add(list, '.', px, py);
	}
      else if (c == '.' || c == 'w' || c == ' ')
	map_add(list, c, px, py);
      else
	{
	  printf("    - Elément inconnu : '%c' (%d,%d), a été remplacé par '%c'\n",
		 c, px, py, MAP_DEF);
	  map_add(list, MAP_DEF, px, py);
	}
    }
  printf("  > Fichier de map lu, et de taille (%d,%d)\n", sx, py);
  DI->map_x = sx;
  DI->map_y = py;
  close(fd);
}
