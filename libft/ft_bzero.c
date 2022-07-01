/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truiz-pa <truiz-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 13:32:23 by truiz-pa          #+#    #+#             */
/*   Updated: 2022/05/16 20:51:32 by truiz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The bzero() function erases the data in the n bytes of the memory
// starting at the location pointed to by s, by writing zeros (bytes
// containing '\0') to that area.

void	*ft_bzero(void *b, size_t len)
{
	unsigned char	*ptr;

	ptr = b;
	while (len-- > 0)
	{
		*ptr++ = '\0';
	}
	return (b);
}
