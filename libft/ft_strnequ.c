/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 01:26:04 by omputle           #+#    #+#             */
/*   Updated: 2019/06/21 09:50:19 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	count;
	int		ans;

	count = 0;
	ans = 1;
	if (!s1 || !s2)
		return (0);
	while ((s1[count] != '\0' || s2[count] != '\0') && count < n)
	{
		if (s1[count] != s2[count])
		{
			return (0);
		}
		count++;
	}
	return (ans);
}
