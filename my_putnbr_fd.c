#include "libmy.h"

void	my_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		my_putchar_fd('-', fd);
	}
	if (nb > 9)
		my_putnbr_fd(nb / 10, fd);
	my_putchar_fd(nb % 10 + 48, fd);
}

void	my_putnbr(int n)
{
	my_putnbr_fd(n, 1);
}
