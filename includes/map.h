/*
** map.h for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Thu May 15 18:52:20 2003 StarK
** Last update Thu May 15 22:45:10 2003 StarK
*/

typedef struct	s_map
{
  char		type;
  int		x;
  int		y;
  struct s_map	*next;
} t_map;

typedef struct	s_gfx
{
  char		*type;
  ImlibImage	*im;
  struct s_gfx	*next;
} t_gfx;
