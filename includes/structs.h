/*
** structs.h for  in 
** 
** Made by StarK
** Login   <stark@abris13.org>
** 
** Started on  Tue May 13 20:33:32 2003 StarK
** Last update Fri May 30 16:07:20 2003 StarK
*/

typedef struct	s_info
{
  char		*map_file;
  int		pos_x;
  int		pos_y;
  int		win_x;
  int		win_y;
  char		*win_tit;
  int		map_x;
  int		map_y;
  int		start;
  int		auth_ok;
  int		map_ok;
  int		nib_ok;
  int		ref_ok;
} t_info;

typedef struct	s_el
{
  int		num;
  char		alpha;
  int		x;
  int		y;
  struct s_el	*next;
} t_el;

typedef struct	s_pl
{
  int		sock;
  char		*name;
  t_nib		*nib;
  int		ready;
  int		speed;
  int		sp_cyc;
  struct s_pl	*next;
} t_pl;

typedef struct	s_net
{
  int		server;
  int		slots;
  char		*host;
  int		port;
  char		*nick;
} t_net;

typedef struct	s_sv
{
  int		sk_contact;
  int		sk_tab[PL_MAX];
  fd_set       	fd_tab;
} t_sv;

typedef struct	s_cl
{
  int		sock;
} t_cl;

typedef struct	s_xd
{
  Display	*dpy;
  Window	win;
  GC		gc;
  GC		gcg;
  ImlibData	*im_id;
  Pixmap	buf;
  Pixmap	bg;
  Pixmap	status;
} t_xd;

typedef struct	s_list
{
  t_info	*info;
  t_map		*map;
  t_nib		*nib;
  t_xd		*xd;
  t_gfx		*gfx;
  t_net		*net;
  t_pl		*pl;
  t_sv		*sv;
  t_cl		*cl;
  t_pn		*pn;
  t_el		*el;
} t_list;
