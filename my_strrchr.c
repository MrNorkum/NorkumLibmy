#include "libmy.h"

char	*my_strrchr(const char *s, int c)
{
	int	i;

	i = my_strlen(s) + 1;
	while (--i >= 0)
		if (s[i] == (char)c)
			return ((char *)&s[i]);
	return (0);
}
