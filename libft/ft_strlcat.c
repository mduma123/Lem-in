/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 16:31:55 by omputle           #+#    #+#             */
/*   Updated: 2019/06/24 17:20:58 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < n)
		i++;
	while (src[j] && ((i + j + 1) < n))
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i != n)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
