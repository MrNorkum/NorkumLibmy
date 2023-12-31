#include <sys/_types/_size_t.h>

char	*my_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = -1;
	if (!needle[0])
		return ((char *)haystack);
	while (haystack[++h] && h < len)
	{
		n = 0;
		while (haystack[h + n] == needle[n] && haystack[h + n]
			&& h + n < len)
			n++;
		if (!needle[n])
			return ((char *)haystack + h);
	}
	return (0);
}
