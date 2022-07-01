
#include "libft.h"

// The strnstr function locates the first occurrence of the null-terminated
// string needle in the string haystack, where not more than len characters 
// are searched. Characters that appear after a \0 character are not searched.

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n_len;
	char	*c_hay;

	i = 0;
	c_hay = (char *)haystack;
	n_len = ft_strlen(needle);
	if (haystack == needle || n_len == 0)
		return (c_hay);
	while (c_hay[i] != '\0' && i < len)
	{
		j = 0;
		while (c_hay[i + j] != '\0' && needle[j] != '\0'
				&& c_hay[i + j] == needle[j] && i + j < len)
			j++;
		if (j == n_len)
			return (c_hay + i);
		i++;
	}
	return (0);
}