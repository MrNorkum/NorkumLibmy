static inline int isspaces(const char c)
{
    return (c == 32 || (9 <= c && c <= 13));
}

int my_atoi(const char *s, char sign, register int res, char mod)
{
    if (isspaces(*s) && !mod)
        return (my_atoi(s + 1, 1, 0, 0));
    if (*s == '-' && !mod)
        return (my_atoi(s + 1, -1, 0, 1));
    if (*s == '+' && !mod)
        return (my_atoi(s + 1, 1, 0, 1));
    if ('0' <= *s && *s <= '9')
        return (my_atoi(s + 1, sign, (res * 10) + (*s & 15), 1));
    return (res * sign);
}

int ft_atoi(const char *str)
{
    return (my_atoi(str, 1, 0, 0));
}
---------------------------------------------------------------------
int	ft_atoi(const char *str)
{
	register int	res;
	char		sign;

	res = 0;
	sign = 1;
	while (*str == 32 || (9 <= *str && *str <= 13))
		str++;
	if (*str == 45)
		sign = -1;
	if (*str == 43 || *str == 45)
		str++;
	while (48 <= *str && *str <= 57)
		res = (res * 10) + (*str++ & 15);
	return (res * sign);
}
