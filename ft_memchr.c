/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:27:48 by hkeles            #+#    #+#             */
/*   Updated: 2023/07/04 16:05:18 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		i;

	i = -1;
	str = (char *)s;
	while (++i < n)
		if (str[i] == (char)c)
			return ((void *)&str[i]);
	return (NULL);
}
