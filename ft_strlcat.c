#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	i = -1;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstlen >= dstsize)
		return (dstsize + srclen);
	while (src[++i] && i + dstlen < dstsize - 1)
		dst[dstlen + i] = src[i];
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
