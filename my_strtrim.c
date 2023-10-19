#include "libmy.h"
#include <stdlib.h>

char	*my_strtrim(char const *s1, char const *set)
{
	size_t		len;
	const char	*start;
	const char	*end;
	char		*trim;

	start = s1;
	end = s1 + my_strlen(s1) - 1;
	while (*start && my_strchr(set, *start))
		start++;
	while (end > start && my_strchr(set, *end))
		end--;
	len = end - start + 1;
	trim = (char *)malloc(len + 1);
	if (!trim)
		return (NULL);
	return (my_strlcpy(trim, start, len + 1), trim[len] = '\0', trim);
}
