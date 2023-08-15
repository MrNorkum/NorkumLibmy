#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    return (ft_memmove(dst, src, n));
}
