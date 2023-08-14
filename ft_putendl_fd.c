#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	while (*s && write(fd, s++, 1))
		;
	write(fd, "\n", 1);
}

void	ft_putendl(char *s)
{
	while (*s && write(1, s++, 1))
		;
	write(1, "\n", 1);
}
