
#include "libft.h"

// The calloc() function in C is used to allocate a specified 
// amount of memory and then initialize it to zero. The function 
// returns a void pointer to this memory location, which can 
// then be cast to the desired type. The function takes in two 
// parameters that collectively specify the amount of memory ​​to 
// be allocated.

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(size * count);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count);
	return (ptr);
}