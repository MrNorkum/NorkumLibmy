#include "libmy.h"
#include <stdlib.h>

list_t	*my_lstmap(list_t *lst, void *(*f)(void *), void (*del)(void *))
{
	list_t	*result;
	list_t	*node;
	void	*content;

	if (!lst || !f)
		return (0);
	result = 0;
	while (lst)
	{
		content = f(lst->content);
		if (content == 0)
			my_lstclear(&result, del);
		if (content == 0)
			return (0);
		node = my_lstnew(content);
		if (!node)
		{
			free(content);
			my_lstclear(&result, del);
			return (0);
		}
		my_lstadd_back(&result, node);
		lst = lst->next;
	}
	return (result);
}
