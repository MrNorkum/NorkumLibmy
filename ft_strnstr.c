#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = -1;
	n = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[++h] && h < len)
	{
		while (haystack[h + n] == needle[n] && haystack[h + n]
			&& h + n < len)
			n++;
		if (needle[n] == '\0')
			return ((char *)haystack + h);
		n = 0;
	}
	return (0);
}
