#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)src;
	if (!dst || !src)
		return (0);
	while (size > 1)
	{
		*(dst + i) = s[i];
		if (s[i] == '\0')
			return (ft_strlen(src));
		i++;
		size --;
	}
	if (size > 0)
		*(dst + i) = '\0';
	return (ft_strlen(src));
}
