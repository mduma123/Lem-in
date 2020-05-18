#include "../lemin.h"

void   del_array_arrays(char **arr)
{
  int i;

  i = 0;
  while (arr[i] != NULL)
  {
    ft_strdel(&arr[i]);
    i++;
  }
  free(arr);
  arr = NULL;
}
