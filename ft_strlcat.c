#include "libft.h"

size_t ft_strlcat (char *dst, const char *src, size_t dstsize) 
{
	size_t i;
	size_t c;

	i = ft_strlen(dst);//размер dst, чтобы записывать в конец массива
	c = 0;
	while(c < dstsize)
		{
			dst[i] = src[c];
			c++;
		}
	dst[i] = '\0'; //добавляем в конец строки символ \0
	return (i + ft_strlen(src));
}
