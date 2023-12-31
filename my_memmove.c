#include <sys/_types/_size_t.h>

void	*my_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = -1;
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (!dst && !src)
		return (0);
	if (d < s)
		while (++i < len)
			d[i] = s[i];
	else if (d > s)
		while (len--)
			d[len] = s[len];
	return (dst);
}
