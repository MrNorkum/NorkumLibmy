#include <unistd.h>

void	my_putendl_fd(char *s, int fd)
{
	while (*s && write(fd, s++, 1))
		;
	write(fd, "\n", 1);
}

void	my_putendl(char *s)
{
	my_putendl_fd(s, 1);
}
