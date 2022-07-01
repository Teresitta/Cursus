
#include "libft.h"

// The C library function int atoi(const char *str) 
// converts the string argument str to an integer (type int).

int	ft_atoi(const char *str)
{
	long	i;
	long	nbr;
	int		sign;

	i = 0;
	nbr = 0;
	sign = 1;
	while (str[i] != '\0' && (str[i] == 32 || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f'))
		i++;
	/*if (str[i] != '\0' && str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-') 
            sign = -1;
		i++;
	}*/
	while (str[i] != '\0' && ft_isdigit(str[i]))
		nbr = (nbr * 10) + (str[i++] - '0');
	return (nbr*sign);
}