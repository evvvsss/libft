#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*d;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	d = malloc(nmemb * size);
	if (!d)
		return (NULL);
	ft_bzero(d, nmemb * size);
	return (d);
}
