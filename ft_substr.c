#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	size_t i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if ((unsigned int)ft_strlen(s) <= start)
	{
		str = (char*)malloc(sizeof(char));
		str[0] = '\0';
		return (str);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if(!(str = (char*)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (len--)
		str[i++] = s[start++];
	str[i]  = '\0';
	return (str);
}