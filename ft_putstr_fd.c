#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	while (*s && write(fd, s++, 1))
		;
}

void	ft_putstr(char *s)
{
	ft_putstr_fd(s, 1);
}
