/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 11:59:38 by omputle           #+#    #+#             */
/*   Updated: 2019/06/24 17:20:12 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	unsigned char	*src;
	unsigned char	*dest;

	src = (unsigned char *)str2;
	dest = (unsigned char *)str1;
	if (*dest == '\0' && *src == '\0')
		return (NULL);
	while (n > 0)
	{
		*(dest++) = *(src++);
		n--;
	}
	return (str1);
}
