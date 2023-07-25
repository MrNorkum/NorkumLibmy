/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:58:53 by hkeles            #+#    #+#             */
/*   Updated: 2023/07/07 10:29:52 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*tmp;

	i = -1;
	tmp = (unsigned char *)b;
	while (++i < len)
		tmp[i] = c;
	return (tmp);
}
