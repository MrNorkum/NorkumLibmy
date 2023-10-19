#include "libmy.h"

void	*my_memcpy(void *dst, const void *src, size_t n)
{
	return (my_memmove(dst, src, n));
}
