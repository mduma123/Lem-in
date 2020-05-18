#ifndef LEMIN_H
# define LEMIN_H

# include "get_next_line/get_next_line.h"
# include "libft/libft.h"

typedef	struct	s_object
{
	char	*rooms;		/* Stores the rooms as they are from the standard input */
	char	*ants;		/* Stores the ants as they are from the standard input */
	char	*links;		/* Stores the links as they are from the standard input */
	int		check;
	int		num_ants;		/* stores number of ants */
	int 	num_rooms;
	int 	*rooms_array;
	int 	**adj_mat;
	int		path_position;
	int 	current_room;
	char	*start;
	char	*end;
	int		*path;
}		t_object;



t_object		*map_init(void);

void	read_map(t_object *m);
void get_ants(t_object *m, char *line);
void  get_rooms(t_object *m, char *line);
void  get_links(t_object *m, char *line);

void  struct_init(t_object *m);
void locate_start_end(t_object *m);
void  adjacency_matrix(t_object *m);
int find_room(t_object *m, int room);
int   find_path(t_object *m);

void   remove_room(t_object *m, int i, int check);

void  print_map(t_object *m);
void  print_path(t_object *m);

void   del_array_arrays(char **arr);
char  *append_string(char *s1, char *s2);
void  exit_program(t_object *m, int check, int error);
#endif
