int	my_tolower(int c)
{
	return ((65 <= c && c <= 90) * (c + 32) + !(65 <= c && c <= 90) * c);
}
