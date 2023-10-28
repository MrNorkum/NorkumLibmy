#include "libmy.h"

void	my_lstadd_back(list_t **lst, list_t *new)
{
	if (!lst)
		return ;
	else if (*lst)
		my_lstlast(*lst)->next = new;
	else
		*lst = new;
}
