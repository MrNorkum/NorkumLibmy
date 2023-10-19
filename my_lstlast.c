#include "libmy.h"

list_t	*my_lstlast(list_t *lst)
{
	if (!lst)
		return (0);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}
