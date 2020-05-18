#include "libft.h"

char    *ft_strtrim_del(char *s, char *old_str)
{
  char    *new_str;

  new_str = ft_strtrim(s);
  ft_strdel(&old_str);
  return (new_str);
}
