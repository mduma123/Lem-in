#include "../lemin.h"

static void delete_double_int_arr(int **arr, t_object *m)
{
  int i = 0;

  while (i < m->num_rooms)
    free(arr[i++]);
  free(arr);
  arr = NULL;
}

void  exit_program(t_object *m, int check, int error)
{
  ft_strdel(&(m->ants));
  ft_strdel(&(m->rooms));
  ft_strdel(&(m->links));
  ft_strdel(&(m->start));
  ft_strdel(&(m->end));
  if (check == 1)
  {
    free(m->rooms_array);
    free(m->path);
    delete_double_int_arr(m->adj_mat, m);
  }
  free(m);
  m = NULL;
  if (error)
    ft_putendl("ERROR");
  exit(0);
}
