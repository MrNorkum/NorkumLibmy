#include "libmy.h"

void	my_lstadd_back(list_t **lst, list_t *new)
{
	if (lst && *lst)
		my_lstlast(*lst)->next = new;
	else if (lst)
		*lst = new;
}
