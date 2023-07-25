/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 10:35:16 by hkeles            #+#    #+#             */
/*   Updated: 2023/07/08 10:35:53 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_wc(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			while (*s && *s != c)
				s++;
			i++;
		}
	}
	return (i);
}

static int	ft_wlen(char const *s, char c)
{
	int	len;

	len = 0;
	if (!*s)
		return (0);
	while (*s && *s++ != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		a;
	int		i;

	a = -1;
	i = 0;
	res = (char **)malloc(sizeof(char *) * (ft_wc(s, c) + 1));
	if (!s || !res)
		return (NULL);
	while (++a < ft_wc(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		res[a] = ft_substr(s, i, ft_wlen(&s[i], c));
		if (!res[a])
		{
			while (a >= 0)
				free(res[a--]);
			return (free(res), NULL);
		}
		i += ft_wlen(&s[i], c);
	}
	return (res[a] = NULL, res);
}
