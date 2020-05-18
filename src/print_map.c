#include "../lemin.h"

void  print_map(t_object *m)
{
  ft_putendl(m->ants);
  ft_putendl(m->rooms);
  ft_putendl(m->links);
  ft_putchar('\n');
}
