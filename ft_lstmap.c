#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*element;
	t_list	*t;

	element = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		t = ft_lstnew(f(lst->content));
		if (!t)
		{
			ft_lstclear(&element, del);
			return (NULL);
		}
		ft_lstadd_back(&element, t);
		lst = lst->next;
	}
	return (element);
}
