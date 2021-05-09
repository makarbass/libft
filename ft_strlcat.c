#include "libft.h"

size_t ft_strlcat (char *dst, const char *src, size_t dstsize) 
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = ft_strlen(dst);
	k = ft_strlen(src);

	if (j > dstsize)
			k = k + dstsize;
	else
	{
		k = k + j;
		while (src[i] != '\0' && j < dstsize -1)
			dst[j++] = src[i++];
		dst[j] = '\0';
	}
	return (k);
}
