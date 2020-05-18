/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:03:00 by omputle           #+#    #+#             */
/*   Updated: 2019/06/24 17:26:04 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	size_t	count;
	char	*dest;

	len = ft_strlen((char *)s1);
	if (!(dest = ft_memalloc(sizeof(char) * (len + 1))))
		return (0);
	count = 0;
	while (s1[count] != '\0')
	{
		dest[count] = s1[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
