#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*arr;

	if (!lst || !del)
		return ;
	while (*lst != 0)
	{
		arr = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		(*lst) = arr;
	}
	*lst = 0;
}
