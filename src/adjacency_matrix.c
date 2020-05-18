#include "../lemin.h"

static  void set_rooms_array(t_object *m, char *start, char *end)
{
  char **rooms_str;
  char **inv_str;
  char **room;
  char  *temp;
  int i = 0;
  int count = 1;

  inv_str = ft_strsplit(m->rooms, '\n');
  temp = ft_strimplode(inv_str, m->start, m->end);
  rooms_str = ft_strsplit(temp, '\n');
  ft_strdel(&temp);
  m->rooms_array[0] = ft_atoi(start);
  m->rooms_array[m->num_rooms - 1] = ft_atoi(end);
  while (count < m->num_rooms - 1)
  {
    room = ft_strsplit(rooms_str[i], ' ');
    if (room[0][0] != '#')
    {
      if (ft_isnum(room[0]) && ft_atoi(room[0]) != ft_atoi(start) &&
      ft_atoi(room[0]) != ft_atoi(end))
        m->rooms_array[count] = ft_atoi(room[0]);
      else
      {
        del_array_arrays(inv_str);
        del_array_arrays(rooms_str);
        del_array_arrays(room);
        exit_program(m, 1, 1);
      }
      count++;
    }
    del_array_arrays(room);
    i++;
  }

  del_array_arrays(inv_str);
  del_array_arrays(rooms_str);
}

static void create_adjaceny_matrix(t_object *m)
{
  int i = 0;
  int j = 0;

  m->adj_mat = (int**)malloc(sizeof(int*) * m->num_rooms);
  while (i < m->num_rooms)
  {
    j = 0;
    m->adj_mat[i] = (int*)malloc(sizeof(int) * m->num_rooms);
    while (j < m->num_rooms)
    {
      m->adj_mat[i][j] = 0;
      j++;
    }
    i++;
  }
}

void  add_links_to_adjmat(t_object *m)
{
  char  **links;
  char  **link;
  int   left;
  int   right;
  int i = 0;

  links = ft_strsplit(m->links, '\n');
  while (links[i] != NULL)
  {
    if (links[i][0] != '#')
    {
      link = ft_strsplit(links[i], '-');
      left = find_room(m, ft_atoi(link[0]));
      right = find_room(m, ft_atoi(link[1]));
      if (left >= m->num_rooms || right >= m->num_rooms)
      {
        del_array_arrays(link);
        del_array_arrays(links);
        exit_program(m, 1, 1);
      }
      if (left < m->num_rooms && right < m->num_rooms)
      {
        m->adj_mat[left][right] = 1;
        m->adj_mat[right][left] = 1;
      }
      del_array_arrays(link);
    }
    i++;
  }
  del_array_arrays(links);
}

void  adjacency_matrix(t_object *m)
{
  char **start;
  char **end;

  start = ft_strsplit(m->start, ' ');
  end = ft_strsplit(m->end, ' ');
  create_adjaceny_matrix(m);
  set_rooms_array(m, start[0], end[0]);
  add_links_to_adjmat(m);
  del_array_arrays(start);
  del_array_arrays(end);
}
