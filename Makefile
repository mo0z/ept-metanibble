##
## Makefile for  in /u/ept2/jouan_t/code/c/projetx
## 
## Made by thibault jouan
## Login   <jouan_t@epita.fr>
## 
## Started on  Mon May 12 00:11:34 2003 thibault jouan
## Last update Thu Jun 26 18:44:08 2003 StarK
##

NAME	= metanibble
GFLAGS	= -Wall
INC	= -Iincludes -I/usr/local/include -I/usr/X11R6/include \
		-Ivendor/imlib-1.9.15/Imlib
LIBS	= -L/usr/local/lib -L/usr/X11R6/lib -Lvendor/imlib-1.9.15/Imlib/.libs -lX11 -lpng -lImlib -lm
CFLAGS	= $(GFLAGS) $(INC)
SRC	= 	main.c			\
		list_init.c		\
		av_get.c		\
		map_init.c		\
		x_init.c		\
		x_open.c		\
		x_gfx_load.c		\
		x_gfx_load_png.c	\
		map_init_default.c	\
		map_init_file.c		\
		map_add.c		\
		x_quit.c		\
		x_ev_expose.c		\
		x_ev_key.c		\
		list_init_map.c		\
		list_init_net.c		\
		sv_init.c		\
		net_init.c		\
		net_loop.c		\
		sv_sk_create.c		\
		sv_sk_scan.c		\
		timer_ajust.c		\
		net_read.c		\
		timer_late.c		\
		sv_sk_conx.c		\
		sv_sk_deco.c		\
		cl_connect.c		\
		cl_launch.c		\
		cl_loop.c		\
		cl_send.c		\
		nib_init.c		\
		nib_add.c		\
		sv_recv.c		\
		map_get_coord.c		\
		nib_check_pos.c		\
		sv_send_all.c		\
		pl_add.c		\
		cl_xfer.c		\
		pl_count.c		\
		my_strncat.c		\
		nib_count.c		\
		sv_sk_accept.c		\
		sv_sk_refuse.c		\
		pl_get_id.c		\
		pl_print_all.c		\
		pl_print.c		\
		pl_del.c		\
		sv_send.c		\
		chomp.c			\
		explode.c		\
		tbl_print.c		\
		tbl_free.c		\
		cl_read.c		\
		cl_read_analyse.c	\
		cl_list_init.c		\
		get_next_line.c		\
		cl_auth.c		\
		itoa.c			\
		sv_xfer_map.c		\
		cl_xfer_case.c		\
		cl_xfer_map.c		\
		cl_xfer_map_all.c	\
		sv_send_wb.c		\
		net_read_analyse.c	\
		av_check.c		\
		sv_launch.c		\
		x_ev.c			\
		x_bg_alloc.c		\
		x_bg_refresh.c		\
		x_gfx_get.c		\
		net_ready.c		\
		pl_add_nib.c		\
		nib_del.c		\
		sv_send_wall.c		\
		sv_xfer_nib.c		\
		x_redraw.c		\
		cl_xfer_nib.c		\
		cl_pn_add.c		\
		cl_pn_mod.c		\
		x_draw_nib.c		\
		net_calc.c		\
		ke_add.c		\
		cl_pnk_add.c		\
		net_calc_nib.c		\
		net_calc_ke.c		\
		ke_add_start.c		\
		net_calc_col.c		\
		el_add.c		\
		sv_xfer_el.c		\
		cl_xfer_el.c		\
		x_draw_el.c		\
		el_get_coord.c		\
		net_calc_el.c		\
		el_del.c		\
		ke_count.c		\
		net_calc_nib_speed.c	\
		net_calc_nib_mov.c	\
		net_calc_el_c.c
OBJ	= $(SRC:.c=.o)
RM	= rm -f

$(NAME)	: $(OBJ)
	$(CC) -o $(NAME) $(LIBS) $(OBJ)

all	: $(NAME)

clean	:
	$(RM) $(OBJ)

fclean	: clean
	rm -f $(NAME)

re	: fclean $(NAME)
