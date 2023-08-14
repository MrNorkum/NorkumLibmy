#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	while (*s && write(fd, s++, 1))
		;
}

void	ft_putstr(char *s)
{
	while (*s && write(1, s++, 1))
		;
}
