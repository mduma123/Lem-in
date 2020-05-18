#include "../lemin.h"

static int  is_in_path(t_object *m, int i)
{
  /* Checks if we have already passed through this room */
  int count = 0;
  while (m->path[count] != -1)
  {
    if (m->path[count] == i)
      return (1);
    count++;
  }
  return (0);
}

static int   is_at_end(t_object *m, int i)
{
  /* check if it's at the last room */
  if (m->adj_mat[i][m->num_rooms - 1] == 1)
  {
    m->path_position++;
    m->path[m->path_position] = i;
    m->path_position++;
    m->path[m->path_position] = m->num_rooms - 1;
    return (1);
  }
  return (0);
}

static int  check_next_room(t_object *m, int i, int j)
{
  /* checks if room is linked to any other room. If a link exists, it returns
  ** it's position in the adjacency matrix */
  while (j < m->num_rooms)
  {
    j++;
    if (m->adj_mat[i][j] == 1)
      return (j);
  }
  return (0);
}

int   find_path(t_object *m)
{
  int i = 0;
  if (m->adj_mat[0][m->num_rooms - 1] == 1)
  /* check if start is connected to end (first row of the matrix)*/
  {
    m->path_position++;
    m->path[m->path_position] = m->num_rooms - 1;
    return (1);
  }
  while (i = check_next_room(m, m->current_room, i))
  /* finds what other rooms the current room is connected to
  ** the purpose is to check if the rooms conneted to the current rooms are
  ** at the end or if they exist in the path
  */
  {
    if (is_at_end(m, i) == 1)
      return (1);
    else if (is_in_path(m, i))
      remove_room(m, i, 0);
  }
  if ((m->current_room = check_next_room(m, m->current_room, 0)) == 0)
  /* Now we change to the next room connected to the current room
  ** we enter this branch if the current room is not connected to another room
  */
  {
    if (m->path_position == 0 && m->current_room == 0)
      return (0);
    /* Back-tracking to the previous room */
    m->current_room = m->path[m->path_position - 1];
    remove_room(m, m->path[m->path_position], 1);
    if (find_path(m))
      return (1);
  }
  /* If the cuurent too is connected to another room, we add the current room
  ** to the path*/
  m->path_position++;
  m->path[m->path_position] = m->current_room;
  if (find_path(m))
    return (1);
  return(0);
}
