static int	isspaces(const char c)
{
	return (c == 32 || (9 <= c && c <= 13));
}

static int	myatoi(const char *s, char sign, int res, char mod)
{
	if (isspaces(*s) && !mod)
		return (myatoi(s + 1, 0, 0, 0));
	if (*s == '-' && !mod)
		return (myatoi(s + 1, 1, 0, 1));
	if (*s == '+' && !mod)
		return (myatoi(s + 1, 0, 0, 1));
	if ('0' <= *s && *s <= '9')
		return (myatoi(s + 1, sign, (res * 10) + (*s & 15), 1));
	if (sign)
		res = 1 + ~res;
	return (res);
}

int	my_atoi(const char *str)
{
	return (myatoi(str, 0, 0, 0));
}
