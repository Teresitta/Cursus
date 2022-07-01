
#include "libft.h"

// Allocates (with malloc(3)) and returns a string
// representing the integer received as an argument.
// Negative numbers must be handled.

static char	*ft_strnew(int i)
{
	char	*str;

	str = malloc(i * sizeof(char));
	if (!str)
		return (0);
	else
		return (str);
}

static	int	ft_intlen(unsigned int number)
{
	if (number < 10)
		return (1);
	else
		return (ft_intlen(number / 10) + 1);
}

char	*ft_itoa(int n)
{
	char			*s;
	int				len;
	unsigned int	number;

	if (n < 0)
		number = -n;
	else
		number = n;
	len = ft_intlen(number);
	if (n < 0)
		len++;
	s = ft_strnew(len + 1);
	if (!s)
		return (0);
	s[len] = '\0';
	if (n < 0)
		s[0] = '-';
	while (((n < 0)) < len)
	{
		s[len - 1] = number % 10 + '0';
		len--;
		number /= 10;
	}
	return (s);
}