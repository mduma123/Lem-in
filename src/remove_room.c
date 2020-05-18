#include "../lemin.h"

void   remove_room(t_object *m, int i, int check)
{
  /* removes room from adjacency matrix */
  m->adj_mat[m->current_room][i] = 0;
  m->adj_mat[i][m->current_room] = 0;
  if (check)
  {
    m->path[m->path_position] = -1;
    m->path_position--;
  }
}
