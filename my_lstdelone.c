#include "libmy.h"
#include <stdlib.h>

void	my_lstdelone(list_t *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
