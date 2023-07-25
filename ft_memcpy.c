/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 00:05:34 by hkeles            #+#    #+#             */
/*   Updated: 2023/07/04 00:35:44 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = -1;
	d = (char *)dst;
	s = (char *)src;
	if (!dst && !src)
		return (0);
	while (++i < n)
		d[i] = s[i];
	return (d);
}
