/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeles <hkeles@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:46:42 by hkeles            #+#    #+#             */
/*   Updated: 2023/07/07 01:45:27 by hkeles           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*node;
	void	*content;

	if (!lst || !f)
		return (0);
	result = 0;
	while (lst)
	{
		content = f(lst->content);
		if (content == 0)
			ft_lstclear(&result, del);
		if (content == 0)
			return (0);
		node = ft_lstnew(content);
		if (!node)
		{
			free(content);
			ft_lstclear(&result, del);
			return (0);
		}
		ft_lstadd_back(&result, node);
		lst = lst->next;
	}
	return (result);
}
