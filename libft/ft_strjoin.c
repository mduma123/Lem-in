/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 16:11:52 by omputle           #+#    #+#             */
/*   Updated: 2019/07/04 17:13:15 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ans;
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	if (!(ans = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (s1[i] != '\0')
	{
		ans[i] = (char)s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		ans[i] = (char)s2[j];
		j++;
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
