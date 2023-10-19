#include <stdlib.h>

static int	numlen(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		i++;
	while (nb && ++i)
		nb /= 10;
	return (i);
}

char	*my_itoa(int n)
{
	int		len;
	char	*res;
	long	nb;

	nb = n;
	len = numlen(nb);
	res = (char *)malloc(sizeof(char) * len);
	if (!res)
		return (NULL);
	if (nb < 0)
		res[0] = '-';
	nb *= !(n < 0) - (n < 0);
	if (!nb)
		res[0] = '0';
	res[--len] = '\0';
	while (nb)
	{
		res[--len] = nb % 10 + 48;
		nb /= 10;
	}
	return (res);
}
