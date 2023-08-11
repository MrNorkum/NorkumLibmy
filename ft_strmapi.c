#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	str = (char *)malloc(ft_strlen(s) + 1);
	if (!str)
		return (0);
	str[ft_strlen(s)] = '\0';
	i = -1;
	while (s[++i])
		str[i] = f(i, s[i]);
	return (str);
}
