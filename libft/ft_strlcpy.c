/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truiz-pa <truiz-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 15:24:38 by truiz-pa          #+#    #+#             */
/*   Updated: 2022/05/16 20:53:11 by truiz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	len;
	unsigned int	len_src;

	len_src = 0;
	len = 0;
	while (src[len_src] != '\0')
		len_src++;
	if (dstsize == 0)
		return (len_src);
	while (src[len] != '\0' && len < dstsize - 1)
	{
		dst[len] = src[len];
		len++;
	}
	dst[len] = '\0';
	return (len_src);
}
