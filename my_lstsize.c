#include "libmy.h"

int	my_lstsize(list_t *lst)
{
	if (!lst)
		return (0);
	return (1 + my_lstsize(lst->next));
}
