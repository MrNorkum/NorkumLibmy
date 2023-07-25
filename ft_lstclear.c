/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:33:41 by hkeles            #+#    #+#             */
/*   Updated: 2023/07/05 18:42:47 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*arr;

	if (!lst || !del)
		return ;
	while (*lst != 0)
	{
		arr = (*lst)-> next;
		ft_lstdelone(*lst, del);
		(*lst) = arr;
	}
	*lst = 0;
}
