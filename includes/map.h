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
