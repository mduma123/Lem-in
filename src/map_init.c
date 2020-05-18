#include "../lemin.h"

t_object		*map_init(void)
{
  t_object   *m;

  m = (t_object*)malloc(sizeof(t_object));
  m->ants = ft_strnew(0);
  m->rooms = ft_strnew(0);
  m->links = ft_strnew(0);
  m->start = ft_strnew(0);
  m->end = ft_strnew(0);
  m->check = 0;
  m->num_ants = 0;
  m->num_rooms = 0;
}
