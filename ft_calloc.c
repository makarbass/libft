#include "libft.h"

void * ft_calloc(size_t count, size_t size)
{
	char * ptr;

	ptr = malloc(count * size); //выделяем через маллок count элементов, размером size, в функцию можно отправить  sizeof(char)
	if(!ptr)
		return NULL;
	ft_bzero(ptr, count);

	return(ptr);
}
