#include "../lemin.h"

void  get_rooms(t_object *m, char *line)
{
  char  **room_vals;
  int   i;

  i = 0;
  m->rooms = append_string(m->rooms, line);
  m->check = 2;
  if (line[0] == '#')
    return ;
  room_vals = ft_strsplit(line, ' ');
  while (room_vals[i] != NULL)
  {
    if (!ft_isnum(room_vals[i]))
    {
      del_array_arrays(room_vals);
      exit_program(m, 0, 1);
    }
    i++;
  }
  if (i != 3)
  {
    del_array_arrays(room_vals);
    exit_program(m, 0, 1);
  }
  del_array_arrays(room_vals);
  m->num_rooms++;
}
