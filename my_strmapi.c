#include "libmy.h"
#include <stdlib.h>

char	*my_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	i = -1;
	str = (char *)malloc(my_strlen(s) + 1);
	if (!str)
		return (0);
	str[my_strlen(s)] = '\0';
	while (s[++i])
		str[i] = f(i, s[i]);
	return (str);
}
