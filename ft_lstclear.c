#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*element;

	while (*lst)
	{
		if ((*lst)->content)
			del((*lst)->content);
		element = *lst;
		*lst = element->next;
		free(element);
	}
	lst = NULL;
}
