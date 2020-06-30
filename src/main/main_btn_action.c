#include "rtv1.h"

void	ft_gui_mousebuttonup_win_menu_btnauthor(void *data, SDL_Event e, \
			t_list *dom, int type)
{
	t_wolf3d	*w;

	(void)e;
	(void)type;
	(void)dom;
	w = (t_wolf3d*)data;
	ft_gui_elem_set_status(\
		ft_gui_search_elem_by_name(w->gui.dom, "win_menu"), \
		GUI_ELEM_HIDDEN);
	ft_gui_elem_set_status(\
		ft_gui_search_elem_by_name(w->gui.dom, "win_author"), \
		GUI_ELEM_VISIBLE);
	w->gui.mode = GUI_MD_MENU;
}

void	ft_gui_mousebuttonup_win_author_btnmenu(void *data, SDL_Event e, \
			t_list *dom, int type)
{
	t_wolf3d	*w;

	(void)e;
	(void)type;
	(void)dom;
	w = (t_wolf3d*)data;
	ft_gui_elem_set_status(\
		ft_gui_search_elem_by_name(w->gui.dom, "win_author"), \
		GUI_ELEM_HIDDEN);
	ft_gui_elem_set_status(\
		ft_gui_search_elem_by_name(w->gui.dom, "win_menu"), \
		GUI_ELEM_VISIBLE);
	w->gui.mode = GUI_MD_MENU;
}

// !!!
void	ft_gui_mousebuttonup_win_menu_btngame(void *data, SDL_Event e, \
			t_list *dom, int type)
{
	t_wolf3d	*w;

	(void)e;
	(void)type;
	(void)dom;
	w = (t_wolf3d*)data;
	ft_gui_elem_set_status(\
		ft_gui_search_elem_by_name(w->gui.dom, "win_menu"), \
		GUI_ELEM_HIDDEN);
	ft_gui_elem_set_status(\
		ft_gui_search_elem_by_name(w->gui.dom, "win_render"), \
		GUI_ELEM_VISIBLE);
	w->gui.mode = GUI_MD_RENDER;
}

// !!!
void	ft_gui_mousebuttonup_win_menu_btneditor(void *data, SDL_Event e, \
			t_list *dom, int type)
{
	t_wolf3d	*w;

	(void)e;
	(void)type;
	(void)dom;
	w = (t_wolf3d*)data;
	ft_gui_elem_set_status(\
		ft_gui_search_elem_by_name(w->gui.dom, "win_menu"), \
		GUI_ELEM_HIDDEN);
	ft_gui_elem_set_status(\
		ft_gui_search_elem_by_name(w->gui.dom, "win_me"), \
		GUI_ELEM_VISIBLE);
	w->gui.mode = GUI_MD_ME;
	w->player_status = 0;
}

void	ft_gui_mousebuttonup_win_menu_btnexit(void *data, SDL_Event e, \
			t_list *dom, int type)
{
	t_wolf3d	*w;

	(void)e;
	(void)type;
	(void)dom;
	w = (t_wolf3d*)data;
	w->sdl->running = 0;
	exit(0);
}
