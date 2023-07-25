/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:19:12 by hkeles            #+#    #+#             */
/*   Updated: 2023/07/07 20:20:24 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	x;
	void	*ptr;

	x = count * size;
	ptr = malloc(x);
	if (ptr != 0)
		ft_memset(ptr, 0, x);
	return (ptr);
}
