/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 11:17:55 by omputle           #+#    #+#             */
/*   Updated: 2019/06/19 09:42:22 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	count;
	size_t			size;
	char			*str;
	char			*copy;

	count = 0;
	copy = (char*)s;
	size = len + (size_t)start;
	if (!s)
		return (0);
	if (size > ft_strlen(copy))
		return (0);
	else
	{
		if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
			return (0);
		while (count < len)
		{
			str[count] = (char)copy[start];
			start++;
			count++;
		}
		str[count] = '\0';
	}
	return (str);
}
