/*
** mn.h for  in /u/ept2/jouan_t/code/c/projetx
** 
** Made by thibault jouan
** Login   <jouan_t@epita.fr>
** 
** Started on  Mon May 12 00:11:17 2003 thibault jouan
** Last update Fri May 30 16:01:01 2003 StarK
*/

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/keysym.h>
#include <Imlib.h>

#define PL_MAX	64

#include "map.h"
#include "nib.h"
#include "structs.h"

#define	DI	list->info
#define DM	list->map
#define	DX	list->xd
#define DG	list->gfx
#define DN	list->net
#define DP	list->pl
#define DS	list->sv
#define DC	list->cl
#define DW	list->nib
#define DE	list->el
#define DPN	list->pn
#define MAP_X	30
#define MAP_Y	20
#define POS_X	64
#define POS_Y	64
#define UNIT	12
#define MAP_DEF	'.'
#define CYC_PS	32
#define CYC_LN	(1000000 / CYC_PS)
#define DF_PORT	42042
#define DF_SLTS	1
#define MSG_LN	1024
#define NIB_DST	4
#define DF_SPD  20
#define DF_MX	40
#define DF_MY	25

#define MAX_SL(x, y)	(x > y ? x : y)

t_list		*list_init(char **av);
char		*av_get(char **av, char *tok);
void		map_init(t_list *list);
void		x_init(t_list *list);
void		x_open(t_list *list);
void		x_gfx_load(t_list *list);
void		x_gfx_load_png(t_list *list, char *type, char *file);
void		map_init_default(t_list *list);
void		map_init_file(t_list *list);
void		map_add(t_list *list, char c, int px, int py);
void		x_quit(t_list *list);
void		x_loop(t_list *list);
void		x_rt(t_list *list);
void		x_ev_expose(t_list *list);
void		x_ev_key(t_list *list, XEvent xev);
void		list_init_map(t_list *list, char **av);
void		list_init_net(t_list *list, char **av);
void		sv_init(t_list *list);
void		net_init(t_list *list);
void		net_loop(t_list *list);
int		sv_sk_create(int port);
void		sv_sk_scan(t_list *list);
void		timer_ajust(struct timeval *t_ref, struct timeval *t_out);
void		net_read(t_list *list);
int		timer_late(struct timeval *t_ref);
void		sv_sk_conx(t_list *list, int i);
void		sv_sk_deco(t_list *list, int i);
void		cl_launch(t_list *list2);
void		cl_connect(t_list *list);
void		cl_loop(t_list *list);
void		cl_send(t_list *list, char *s);
void		nib_init(t_list *list);
void		nib_add(t_list *list, int px, int py, int i);
char		*sv_recv(t_list *list, int sock);
t_map		*map_get_coord(t_list *list, int x, int y);
int		nib_check_pos(t_list *list, int x, int y);
void		sv_send_all(t_list *list, char *s);
void		pl_add(t_list *list, int sock, char *name);
void		cl_xfer(t_list *list);
int		pl_count(t_list *list);
char		*my_strncat(char *s1, char *s2, int len);
int		nib_count(t_list *list);
void		sv_sk_refuse(t_list *list, int sock, int i);
void		sv_sk_accept(t_list *list, char *m, int sock);
t_pl		*pl_get_id(t_list *list, int id);
void		pl_print(t_pl *pl);
void		pl_print_all(t_list *list);
void		pl_del(t_list *list, t_pl *pl);
void		sv_send(int sock, char *s);
char		*chomp(char *s);
char		**explode(char *token, char *str);
void		tbl_print(char **tbl);
void		tbl_free(char **tbl);
/*char		*strndup(char *str, int n);*/
char		*cl_read(t_list *list);
void		cl_read_analyse(t_list *list, char *m);
t_list		*cl_list_init(t_list *list2);
char		*get_next_line(int fd);
void		cl_auth(t_list *list, char *m);
char		*itoa(int n);
void		sv_xfer_map(t_list *list, int sock);
void		cl_xfer_case(t_list *list, char *m);
void		cl_xfer_map(t_list *list, char *m);
void		cl_xfer_map_all(t_list *list, char *m);
void		sv_send_wb(int sock, char *s);
void		net_read_analyse(t_list *list, char *m, int sock);
int		av_check(char **av, char *tok);
void		sv_launch(t_list *list);
void		x_ev(t_list *list);
void		x_bg_alloc(t_list *list);
void		x_bg_refresh(t_list *list);
t_gfx		*x_gfx_get(t_list *list, char *s);
int		net_ready(t_list *list);
void		pl_add_nib(t_list *list, t_pl *pl);
void		nib_del(t_list *list, t_nib *nib, int del);
void		sv_send_wall(t_list *list, char *s);
void		sv_xfer_nib(t_list *list);
void		x_redraw(t_list *list);
void		cl_xfer_nib(t_list *list, char *m);
void		cl_pn_add(t_list *list, char **tab);
void		cl_pn_mod(t_list *list, char **tab);
void		x_draw_nib(t_list *list);
void		net_calc(t_list *list);
void		ke_add(t_list *list, t_nib *nib, int px, int py);
void		cl_pnk_add(t_list *list, t_pn *pn, int px, int py);
void		net_calc_nib(t_list *list);
void		ke_add_start(t_list *list, t_nib *nib, int px, int py);
void		net_calc_ke(t_list *list, t_pl *pl);
void		net_calc_col(t_list *list);
void		el_add(t_list *list, int num, char alpha, int x, int y);
void		sv_xfer_el(t_list *list);
void		cl_xfer_el(t_list *list, char *m);
void		x_draw_el(t_list *list);
t_el		*el_get_coord(t_list *list, int x, int y);
void		net_calc_el(t_list *list);
void		el_del(t_list *list, t_el *el);
int		ke_count(t_list *list, t_nib *nib);
void		net_calc_nib_speed(t_list *list, t_pl *pl);
void		net_calc_nib_mov(t_list *list, t_pl *tmp);
void		net_calc_el_c(t_list *list, t_nib *nib);
