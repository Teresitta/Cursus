/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15ft_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: truiz-pa <truiz-pa@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2022/04/29 14:56:04 by truiz-pa          #+#    #+#             */
/*   Updated: 2022/04/29 14:56:04 by truiz-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strchr() function returns a pointer to the first occurrence 
// of the character c in the string s. 


char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c && *s)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	else
		return (NULL);
}
