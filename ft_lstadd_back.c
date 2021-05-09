#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*element;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	element = ft_lstlast(*lst);
	element->next = new;
}
