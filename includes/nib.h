typedef struct	s_ke
{
  int		x;
  int		y;
  struct s_ke	*prev;
  struct s_ke	*next;
} t_ke;

typedef struct	s_nib
{
  int		id;
  int		x;
  int		y;
  int		ix;
  int		iy;
  char		dir;
  char		odir;
  t_ke		*ke;
  int		grow;
  struct s_nib	*next;
} t_nib;

typedef struct	s_pn
{
  int		mine;
  char		*name;
  int		score;
  char		dir;
  int		x;
  int		y;
  int		alive;
  t_ke		*ke;
  struct s_pn	*next;
} t_pn;
