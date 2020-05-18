/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 01:30:29 by omputle           #+#    #+#             */
/*   Updated: 2019/05/28 12:49:25 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)&haystack[i]);
	while (haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (needle[j] == haystack[i + j])
			{
				if (needle[j + 1] == '\0')
					return ((char *)&haystack[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}
