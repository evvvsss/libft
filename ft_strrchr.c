#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	h;

	h = c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == h)
			return ((char *)s + i);
		i--;
	}
	if (s[i] == h)
		return ((char *)s + i);
	return (NULL);
}
