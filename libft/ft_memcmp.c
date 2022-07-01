
#include "libft.h"

// returns a negative, zero, or positive integer depending 
// on whether the first n characters of the object pointed 
// to by s1 are less than, equal to, or greater than the 
//first n characters of the object pointed to by s2.

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ps1;
	const unsigned char	*ps2;
	size_t				i;

	i = 0;
	ps1 = (const unsigned char *)s1;
	ps2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (ps1[i] != ps2[i])
			return (ps1[i] - ps2[i]);
		i++;
	}
	return (0);
}