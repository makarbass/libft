#include "libft.h"

int ft_strncmp (const char *s1, const char *s2, size_t n)
{
  size_t counter;
  counter = 0;

  if (n == 0)
    return(0);
  while ((s1[counter] != '\0' || s2[counter] != '\0') && counter < n)
    {
      if (s1[counter] != s2[counter])
      {
        return (s1[counter] - s2[counter]);
      }
      counter++;
    }
  return 0;
}