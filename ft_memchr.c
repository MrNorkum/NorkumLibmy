#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		i;

	i = -1;
	str = (char *)s;
	while (++i < n)
		if (str[i] == (char)c)
			return ((void *)&str[i]);
	return (NULL);
}
