#include "../lemin.h"

void	read_map(t_object *m)
{
	char	*line;
	while (get_next_line(0, &line) > 0)
	{
		if (ft_strlen(m->ants) == 0)
			get_ants(m, line);
		else if (ft_strchr(line, '-') || m->check == 3)
			get_links(m, line);
		else if ((m->check == 1 || m->check == 2) && line)
			get_rooms(m, line);
		else
			exit_program(m, 0, 1);
		ft_strdel(&line);
	}
}
