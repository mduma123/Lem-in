/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:05:41 by omputle           #+#    #+#             */
/*   Updated: 2019/07/03 11:14:35 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	count;

	count = 0;
	while (s[count] != '\0')
	{
		if (s[count] == c)
		{
			return ((char *)&s[count]);
		}
		count++;
	}
	if (c == '\0')
		return ((char *)&s[count]);
	return (0);
}
