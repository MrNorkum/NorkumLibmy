#include "libmy.h"
#include <stdlib.h>

list_t	*my_lstnew(void *content)
{
	list_t	*new;

	new = (list_t *)malloc(sizeof(list_t));
	if (!new)
		return (0);
	new->content = content;
	new->next = NULL;
	return (new);
}
