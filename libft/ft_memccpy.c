/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 16:18:07 by omputle           #+#    #+#             */
/*   Updated: 2019/06/24 17:19:22 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s2, const void *s1, int c, size_t n)
{
	size_t			count;
	unsigned char	*src;
	unsigned char	*dest;

	count = 0;
	src = (unsigned char *)s1;
	dest = (unsigned char *)s2;
	while (count < n)
	{
		dest[count] = src[count];
		if (src[count] == (unsigned char)c)
			return (&dest[count + 1]);
		count++;
	}
	return (NULL);
}
