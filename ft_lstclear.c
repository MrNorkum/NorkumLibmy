#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*arr;

	if (!lst || !del)
		return ;
	while (*lst != 0)
	{
		arr = (*lst)-> next;
		ft_lstdelone(*lst, del);
		(*lst) = arr;
	}
	*lst = 0;
}
