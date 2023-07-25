/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 19:55:36 by hkeles            #+#    #+#             */
/*   Updated: 2023/07/05 01:35:13 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	i = len;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		i = ft_strlen(s + start);
	substr = (char *)malloc(sizeof(char) * (i + 1));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, i + 1);
	return (substr);
}
