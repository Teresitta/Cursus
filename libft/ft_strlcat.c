/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truiz-pa <truiz-pa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 15:38:18 by truiz-pa          #+#    #+#             */
/*   Updated: 2022/05/16 22:07:47 by truiz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i] != '\0' && i < dstsize)
		i++;
	j = 0;
	while (src[j] != '\0' && (j + i + 1) < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (dstsize != 0 && i < dstsize)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
