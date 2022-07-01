/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truiz-pa <truiz-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:53:45 by truiz-pa          #+#    #+#             */
/*   Updated: 2022/05/16 21:37:41 by truiz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char	*pdst;
	unsigned char	*psrc;

	pdst = dst;
	psrc = (unsigned char *)src;
	if (!dst && !src)
		return (0);
	while (len-- > 0)
	{
		*pdst++ = *psrc++;
	}
	return (dst);
}
