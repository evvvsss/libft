#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*s;

	j = 0;
	len = ft_strlen(dst) + ft_strlen(src);
	s = (char *)src;
	if (ft_memchr(dst, '\0', size) == NULL)
		return (size + ft_strlen(s));
	i = ft_strlen(dst);
	while (i < size - 1)
	{
		*(dst + i) = s[j];
		if (s[j] == '\0')
			return (len);
		i++;
		j++;
	}
	*(dst + i) = '\0';
	return (len);
}
