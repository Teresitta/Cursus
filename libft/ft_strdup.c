

#include "libft.h"

// The strdup() function returns a pointer to a new string which is
// a duplicate of the string s.  Memory for the new string is
// obtained with malloc

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	len;

	len = ft_strlen(s1) + 1;
	s2 = malloc(sizeof(char) * len);
	if (!s2)
		return (0);
	s2 = ft_memcpy(s2, s1, len);
	return (s2);
}