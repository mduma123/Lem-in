#include "../lemin.h"

void  get_links(t_object *m, char *line)
{
  char  **link;
  int i = 0;
  if (line[0] == '#')
  {
    m->links = append_string(m->links, line);
    return ;
  }
  if (m->check == 2)
    m->check = 3;
  if (m->check != 3)
    exit_program(m, 0, 1);
  link = ft_strsplit(line, '-');
  while (link[i] != NULL)
  {
    if (!ft_isnum(link[i]))
    {
      del_array_arrays(link);
      exit_program(m, 0, 1);
    }
    i++;
  }
  del_array_arrays(link);
  m->links = append_string(m->links, line);
}
