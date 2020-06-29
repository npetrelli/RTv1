#ifndef GENERAL_STRUCT_H
# define GENERAL_STRUCT_H

# include "rtv1.h"

# include <libft.h>
# include "gui_struct.h"
# include "SDL2/SDL_mixer.h"
# include "render.h"

/*
** **************************************************************************
**	Define for music and sound
** **************************************************************************
*/
// # define SONG_0			"music/wolf3d_menu.mp3"
// # define SONG_1			"music/song_1.mp3"
// # define SONG_2			"music/song_2.mp3"
// # define SHOT			"music/shot.wav"

typedef struct			s_font
{
	TTF_Font			*ptr_font_18_m;
	TTF_Font			*ptr_font_14_m;
	TTF_Font			*ptr;
	SDL_Color			color;
	int					f_sz;
	int					g_sz;
	int					w;
	int					h;
	int					half_menu;
}						t_font;

typedef struct			s_sdl
{
	SDL_Surface			*srf;
	int					running;
	SDL_Window			*win;
	SDL_Renderer		*renderer;
	Uint32				*pixels;
	SDL_Texture			*text;
	SDL_Texture			*text2;
	t_font				font;
	unsigned char		i;
	Mix_Music			*music;
}						t_sdl;

typedef struct			s_time
{
	Uint32				time;
	Uint32				old_time;
	Uint32				frame_time;
	Uint32				sound_old_time;
	Uint32				sound_time;
	Uint32				change_of_time;
	Uint32				play_time;
	Uint32				sound_sum_time;
	unsigned char		flag;
}						t_time;

typedef struct			s_wolf3d
{
	t_list				*sector;
	t_list				*sprite;
	t_list				*enemy;
	int					sector_status;
	int					player_status;
	int					sprite_status;
	int					enemy_status;
	int					door_status;
	int					sector_count;
	int					sprite_count;
	int					enemy_count;
	t_list				*txtr;
	int					txtr_count;
	t_list				*vertex;
	t_list				*sprites;
	t_sdl				*sdl;
	t_time				t;
	int					fd;
	t_vector3			pos;
	t_gui_coord			pos_start;
	t_gui_coord			offset;
	int					v_d;
	t_gui				gui;
	void				*new_data;

	// List for scenes object
	t_list				*xml; // xml-object
	t_list				*camera;
	t_list				*obj;
	t_list				*light;
}						t_wolf3d;

#endif
