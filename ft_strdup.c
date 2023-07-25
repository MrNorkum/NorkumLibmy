/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:27:40 by hkeles            #+#    #+#             */
/*   Updated: 2023/07/05 15:45:35 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t		len;
	char		*dup;

	len = ft_strlen(s1) + 1;
	dup = malloc(sizeof(char) * len);
	if (!dup)
		return (0);
	ft_strlcpy(dup, s1, len);
	return ((char *)dup);
}
