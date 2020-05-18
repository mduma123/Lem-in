/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:25:06 by omputle           #+#    #+#             */
/*   Updated: 2019/06/24 17:27:01 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				count;
	int				len;
	char			*str;

	count = 0;
	str = (char *)s;
	while (str[count] != '\0')
		count++;
	len = count;
	count--;
	while (count >= 0)
	{
		if (str[count] == (char)c)
			return (&str[count]);
		count--;
	}
	if (c == '\0')
		return (&str[len]);
	return (0);
}
