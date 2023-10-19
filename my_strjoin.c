#include "libmy.h"
#include <stdlib.h>

char	*my_strjoin(char const *s1, char const *s2)
{
	size_t	x;
	size_t	y;
	char	*str;

	x = my_strlen(s1);
	y = my_strlen(s2) + 1;
	str = (char *)malloc(x + y);
	if (!str)
		return (0);
	my_strlcpy(str, s1, x + 1);
	my_strlcpy(str + x, s2, y);
	return (str);
}
