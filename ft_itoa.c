#include "libft.h"

char *ft_itoa(int n)
{
	char *str;

	if(n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc(sizeof(char) * 2);
	if (str)
	{
		if (n < 0)
		{
			str[0] = '-';
			str[1] = '\0';
			return(ft_strjoin(str, ft_itoa(-n)));
		}
		else if (n > 9)
			return (ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10)));
		else
		{
			str[0] = n + '0';
			str[1] = '\0';
		}
	}
	return (str);
}