

#include "libft.h"

// Allocates (with malloc(3)) and returns a substring
// from the string ’s’.
// The substring begins at index ’start’ and is of
// maximum size ’len’.
/*
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
    if (!(s2 = (char *)malloc(len + 1)))
        return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		s2[j++] = s[i++];
	s2[j] = '\0';
	return (s2); 
}
*/