#include "libmy.h"

void	my_lstadd_back(list_t **lst, list_t *new)
{
	list_t	*last;

	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = my_lstlast(*lst);
	last->next = new;
}
