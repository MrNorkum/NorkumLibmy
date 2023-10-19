#include "libmy.h"
#include <stdlib.h>

void	my_lstclear(list_t **lst, void (*del)(void *))
{
	list_t	*arr;

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
