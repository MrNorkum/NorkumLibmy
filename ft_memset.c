#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;

	i = -1;
	while (++i < len)
		((unsigned char *)b)[i] = c;
	return (b);
}
