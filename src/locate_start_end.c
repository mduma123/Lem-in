#include "../lemin.h"

static void locate_start(t_object *m)
{
  char  **rooms_list;
  char  *str;
  int i;

  i = 0;
  rooms_list = ft_strsplit(m->rooms, '\n');
  while (rooms_list[i] != NULL)
  {
    str = ft_strtrim(rooms_list[i]);
    if (ft_strcmp(str, "##start") == 0 && rooms_list[i + 1] != NULL)
    {
      m->start = ft_strtrim_del(rooms_list[++i], m->start);
    }
    ft_strdel(&str);
    i++;
  }
  del_array_arrays(rooms_list);
  if (ft_strlen(m->start) == 0)
    exit_program(m, 0, 1);
}

static void locate_end(t_object *m)
{
  char  **rooms_list;
  char  *str;
  int i;

  i = 0;
  rooms_list = ft_strsplit(m->rooms, '\n');
  while (rooms_list[i] != NULL)
  {
    str = ft_strtrim(rooms_list[i]);
    if (ft_strcmp(str, "##end") == 0 && rooms_list[i + 1] != NULL)
      m->end = ft_strtrim_del(rooms_list[++i], m->end);
    ft_strdel(&str);
    i++;
  }
  del_array_arrays(rooms_list);
  if (ft_strlen(m->end) == 0)
    exit_program(m, 0, 1);
}

static void  validate_links(t_object *m)
{
  char **start;
  char **end;

  start = ft_strsplit(m->start, ' ');
  end = ft_strsplit(m->end, ' ');
  if (!ft_strstr(m->links, start[0]) || !ft_strstr(m->links, end[0]))
  {
    del_array_arrays(start);
    del_array_arrays(end);
    exit_program(m, 0, 1);
  }
  del_array_arrays(start);
  del_array_arrays(end);
}

void locate_start_end(t_object *m)
{
  locate_start(m);
  locate_end(m);
  validate_links(m);
}
