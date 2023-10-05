static int isspaces(const char c)
{
    return (c == 32 || (9 <= c && c <= 13));
}

int my_atoi(const char *s, char sign, int res, char mod)
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
static int isspaces(const char c)
{
    return (c == 32 || (9 <= c && c <= 13));
}
	
int	ft_atoi(const char *str)
{
	int	res;
	char	sign;

	res = 0;
	sign = 0;
	while (isspaces(*str))
		str++;
	if (*str == '-')
		sign = 1;
	if (*str == '+' || *str == '-')
		str++;
	while ('0' <= *str && *str <= '9')
		res = (res * 10) + (*str++ & 15);
	if (sign)
		res = ~res + 1;
	return (res);
}
