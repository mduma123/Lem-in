/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:01:53 by omputle           #+#    #+#             */
/*   Updated: 2019/06/19 09:44:42 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	size_t	count;
	char	*str;

	start = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	if (s[start] == '\0')
		return ("");
	end = ft_strlen(s) - 1;
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end--;
	if (!(str = (char *)malloc(sizeof(char) * (end - start + 2))))
		return (0);
	while ((start + count) <= end)
	{
		str[count] = s[start + count];
		count++;
	}
	str[count] = '\0';
	return (str);
}
