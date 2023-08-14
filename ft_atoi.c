static inline int my_atoi(const char *str, int sign, int res, int mod)
{
    if ((9 <= *str && *str <= 13) || *str == 32) && res == 0 && mod == 0)
        return (my_atoi(str + 1, sign, res, mod));
    if (*str == '-' && res == 0 && mod == 0)
        return (my_atoi(str + 1, -1, res, 1));
    if (*str == '+' && res == 0 && mod == 0)
        return (my_atoi(str + 1, sign, res, 1));
    if ('0' <= *str && *str <= '9')
        return (my_atoi(str + 1, sign, res * 10 + *str - 48, mod));
    return (res * sign);
}

int ft_atoi(const char *str)
{
    return (my_atoi(str, 1, 0, 0));
}
---------------------------------------------------------------------
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
