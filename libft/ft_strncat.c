/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:40:42 by omputle           #+#    #+#             */
/*   Updated: 2019/05/24 10:46:56 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict dest, const char *restrict src, size_t n)
{
	size_t	count;
	size_t	len;
	size_t	i;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	count = len;
	i = 0;
	while (count < (len + n) && src[i] != '\0')
	{
		dest[count] = src[i];
		i++;
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
