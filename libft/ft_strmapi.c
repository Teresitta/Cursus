
#include "libft.h"

// Applies the function ’f’ to each character of the
// string ’s’, and passing its index as first argument
// to create a new string (with malloc(3)) resulting
// from successive applications of ’f’.

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*s2;
	unsigned int	i;

	if (!s)
		return (0);
	s2 = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!s2)
		return (0);
	i = 0;
	while (s[i])
	{
		s2[i] = f(i, s[i]);
		++i;
	}
	s2[i] = 0;
	return (s2);
}