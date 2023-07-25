/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:18:29 by hkeles            #+#    #+#             */
/*   Updated: 2023/07/05 17:30:11 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return (0);
	str[ft_strlen(s)] = '\0';
	i = -1;
	while (s[++i])
		str[i] = f(i, s[i]);
	return (str);
}
