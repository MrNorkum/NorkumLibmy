#include <sys/_types/_size_t.h>

void	my_bzero(void *s, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		((char *)s)[i] = 0;
}
