/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 16:37:26 by omputle           #+#    #+#             */
/*   Updated: 2019/06/07 16:43:39 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t	count;

	count = 0;
	while (src[count] != '\0' && count < len)
	{
		dest[count] = src[count];
		count++;
	}
	while (count < len)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
