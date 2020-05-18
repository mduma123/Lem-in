#include "../lemin.h"

void get_ants(t_object *m, char *line)
{
  char  *str;
  if (line[0] == '#')
    return ;
  m->check = 1;
  str = ft_strtrim(line);
  if (ft_atoi(str) < 0 || !ft_isnum(str))
  {
    ft_strdel(&str);
    exit_program(m, 0, 1);
  }
  m->ants = append_string(m->ants, line);
  m->num_ants = ft_atoi(m->ants);
  ft_strdel(&str);
}
