#include "../lemin.h"

void  struct_init(t_object *m)
{
  int i = 1;
  m->rooms_array = (int*)malloc(sizeof(int) * (m->num_rooms));
  m->current_room = 0;
  m->path_position = 0;
  m->path = (int*)malloc(sizeof(int) * m->num_rooms);
  while (i < m->num_rooms)
  {
    m->path[i] = -1;
    i++;
  }
  m->path[0] = 0;
}
