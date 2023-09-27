#include <stdlib.h>

static int	ft_numlen(int nbr)
{
	int	i;

	i = 0;
	if (nbr <= 0)
		i++;
	while ((nbr > 0 || nbr < 0) && ++i)
		nbr /= 10;
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*res;
	long	nb;

	nb = n;
	len = ft_numlen(nb);
	res= (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	if (nb < 0)
		res[0] = '-';
	nb *= !(n < 0) - (n < 0);
	if (!nb)
		res[0] = '0';
	res[len] = '\0';
	while (nb)
	{
		res[--len] = nb % 10 + 48;
		nb /= 10;
	}
	return (res);
}
