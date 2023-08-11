int	ft_atoi(const char *str)
{
	int	r;
	int	d;

	r = 0;
	d = 1;
	while (*str == 32 || (9 <= *str && *str <= 13))
		str++;
	if (*str == 45)
		d = -1;
	if (*str == 43 || *str == 45)
		str++;
	while (48 <= *str && *str <= 57)
		r = r * 10 + *str++ - 48;
	return (r * d);
}
