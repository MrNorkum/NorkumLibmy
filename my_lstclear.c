#include "libmy.h"
#include <stdlib.h>

void	my_lstclear(list_t **lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	my_lstclear(&(*lst)->next, del);
	del((*lst)->content);
	free(*lst);
	*lst = 0;
}
