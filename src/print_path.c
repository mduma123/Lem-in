#include "../lemin.h"

static void  print_ants_rooms(int ant, int room)
{
  ft_putchar('L');
  ft_putnbr(ant);
  ft_putchar('-');
  ft_putnbr(room);
  ft_putchar(' ');
}

void  print_path(t_object *m)
{
  int   ants;
  int  n = 2;

  while (n < (m->path_position + m->num_ants + 1))
  {
    ants = m->num_ants;
    while (ants > 0)
    {
      if (n - ants > 0 && (n - ants) <= m->path_position)
      print_ants_rooms(ants, m->rooms_array[m->path[n - ants]]);
      ants--;
    }
    n++;
    ft_putchar('\n');
  }
}
