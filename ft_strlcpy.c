#include "libft.h"

size_t ft_strlcpy (char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	if (!dst)
		return(0);
	if (size == 0)
		return(ft_strlen(src));
	while(i <= size && src)
		{
			dst[i] = src[i];
			i++;
		}
	dst[i] = '\0';
	return (ft_strlen(src));
}