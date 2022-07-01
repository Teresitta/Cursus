
#include "libft.h"

// Allocates (with malloc(3)) and returns a copy of
// ’s1’ with the characters specified in ’set’ removed
// from the beginning and the end of the string.

static int	ft_isset(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*sbstr;
	char	*beggin;
	char	*end;

	if (!s1 || !set)
		return (0);
	beggin = (char *)s1;
	end = beggin + ft_strlen(s1);
	while (*beggin && ft_isset(*beggin, set))
		++beggin;
	while (beggin < end && ft_isset(*(end - 1), set))
		--end;
	sbstr = ft_substr(beggin, 0, end - beggin);
	return (sbstr);
}