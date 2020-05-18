/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:15:09 by omputle           #+#    #+#             */
/*   Updated: 2019/06/17 11:54:35 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		if ((haystack[i] == needle[j]) && i < len)
		{
			while ((haystack[i + j] == needle[j]) && i < len)
			{
				if (needle[j + 1] == '\0')
					return ((char *)&haystack[i]);
				j++;
				len--;
			}
		}
		i++;
	}
	return (0);
}
