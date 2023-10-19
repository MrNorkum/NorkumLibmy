#include "libmy.h"

void	my_lstadd_front(list_t **lst, list_t *new)
{
	new->next = *lst;
	*lst = new;
}
