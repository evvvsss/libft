#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*b;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	b = ft_strdup(s);
	if ((b == NULL) || !s || !f)
		return (NULL);
	while (b[i] != '\0')
	{
		b[i] = f(i, b[i]);
		i++;
	}
	b[i] = '\0';
	return (b);
}
