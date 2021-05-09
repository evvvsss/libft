#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	n;
	size_t	i;
	char	h;

	h = c;
	n = ft_strlen(s);
	i = 0;
	while (i <= n)
	{
		if (s[i] == h)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
