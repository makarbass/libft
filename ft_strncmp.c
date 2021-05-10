#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
  int i;
  unsigned char *r;
  unsigned char *t;
  i = 0;
  
  r = (unsigned char *)s1;
  t = (unsigned char *)s2;
  while (n-- && (r[i] || t[i]))
  {
    if (r[i] != t[i])
      return (r[i] - t[i]);
    i++;
  }
  return (0);
}