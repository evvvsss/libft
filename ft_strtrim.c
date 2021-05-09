#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			i;
	size_t			left;
	size_t			right;

	i = 0;
	if (!s1)
		return (NULL);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	left = i;
	i = ft_strlen(s1) - 1;
	while (i > 0 && ft_strchr(set, s1[i]))
		i--;
	right = i;
	return (ft_substr(s1, left, right - left + 1));
}
