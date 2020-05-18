#include "../lemin.h"

int find_room(t_object *m, int room)
/* finds the index of a room in the rooms array */
{
  int i;

  i = 0;
  while (i < m->num_rooms)
  {
    if (m->rooms_array[i] == room)
      return (i);
    i++;
  }
  return (i);
}
