#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = -1;
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
