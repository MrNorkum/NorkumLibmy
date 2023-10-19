#include "libmy.h"

void	my_lstiter(list_t *lst, void (*f)(void *))
{
	if (!f || !lst)
		return ;
	while (lst)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}
