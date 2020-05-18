/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 10:50:32 by omputle           #+#    #+#             */
/*   Updated: 2019/06/08 15:50:12 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t			count;
	unsigned char	*dest;
	unsigned char	*src;

	count = n;
	src = (unsigned char *)str2;
	dest = (unsigned char *)str1;
	if (*dest == '\0' && *src == '\0')
		return (0);
	if (dest > src)
	{
		while (count--)
		{
			dest[count] = src[count];
		}
	}
	else
	{
		dest = ft_memcpy(dest, src, count);
	}
	return (dest);
}
