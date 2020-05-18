#include "../lemin.h"

char  *append_string(char *s1, char *s2)
{
  char  *result;
  if (ft_strlen(s1) == 0)
    result = ft_strdup(s2);
  else
  {
    result = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
    result = ft_strcat(result, s1);
    result = ft_strcat(result, "\n");
    result = ft_strcat(result, s2);
  }
  ft_strdel(&s1);
  return (result);
}
