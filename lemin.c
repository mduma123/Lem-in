#include "lemin.h"

int  main(void)
{
  t_object *m;

  m = map_init();
  read_map(m);
  locate_start_end(m);
  struct_init(m);
  adjacency_matrix(m);
  if (find_path(m))
  {
    print_map(m);
    print_path(m);
  }
  exit_program(m, 1, 0);
  return (0);
}
