/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truiz-pa <truiz-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:40:48 by truiz-pa          #+#    #+#             */
/*   Updated: 2022/05/16 21:41:40 by truiz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*pdst;
	unsigned char	*psrc;
	unsigned char	*lasts;
	unsigned char	*lastd;

	pdst = dest;
	psrc = (unsigned char *)src;
	if (dest == src)
		return (dest);
	if (dest < src)
		while (len--)
			*pdst++ = *psrc++;
	else
	{
		lasts = psrc + (len - 1);
		lastd = pdst + (len - 1);
		while (len--)
			*lastd-- = *lasts--;
	}
	return (dest);
}
