#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = -1;
	d = (char *)dst;
	s = (char *)src;
	if (!dst && !src)
		return (0);
	while (++i < n)
		d[i] = s[i];
	return (d);
}
