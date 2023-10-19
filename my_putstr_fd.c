#include <unistd.h>

void	my_putstr_fd(char *s, int fd)
{
	while (*s && write(fd, s++, 1))
		;
}

void	my_putstr(char *s)
{
	while (*s && write(1, s++, 1))
		;
}
