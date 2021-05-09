#include "libft.h"

char * ft_strdup(const char *s1)
{
	char * ptr;
	int i;

	i = 0;
	ptr = (char *)malloc(sizeof(char)* (ft_strlen(s1) +1));
	if(!ptr)
		return ((void*)0);
	while (s1[i])
		{
			ptr[i] = s1[i];
			i++;
		}
	ptr[i] = '\0';
	return (ptr);
}