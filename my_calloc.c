#include <stdlib.h>

void	*my_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;

	i = -1;
	ptr = malloc(count * size);
	while (!!ptr && ++i < count * size)
		((char *)ptr)[i] = 0;
	return (ptr);
}
