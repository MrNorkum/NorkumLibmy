/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:17:45 by hkeles            #+#    #+#             */
/*   Updated: 2023/07/04 16:39:16 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	r;
	int	d;

	r = 0;
	d = 1;
	while (*str == 32 || (9 <= *str && *str <= 13))
		str++;
	if (*str == 43 || *str == 45)
	{
		if (*str == 45)
			d = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		r = r * 10 + *str - 48;
		str++;
	}
	return (r * d);
}
