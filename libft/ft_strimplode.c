#include "libft.h"

char  *ft_strimplode(char **arr, char *s1, char *s2)
{
  char  *result;
  int len;
  int i;
  int count;

  len = 0;
  i = 0;
  while(arr[i] != NULL)
  {
    if (ft_strcmp(arr[i], s1) != 0 && ft_strcmp(arr[i], s2) != 0)
      len = len + ft_strlen(arr[i]);
    i++;
  }
  len = len + i;
  result = ft_strnew(len);
  count = 0;
  while (arr[count])
  {
    if (ft_strcmp(arr[count], s1) != 0 && ft_strcmp(arr[count], s2) != 0)
    {
      result = ft_strcat(result, arr[count]);
      if (count < i - 1)
        result = ft_strcat(result, "\n");
    }
    count++;
  }
  return (result);
}
