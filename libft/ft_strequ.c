/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 01:25:36 by omputle           #+#    #+#             */
/*   Updated: 2019/06/21 10:27:28 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int	ans;
	int	count;

	ans = 1;
	count = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[count] != '\0' || s2[count] != '\0')
	{
		if (s1[count] != s2[count])
		{
			ans = 0;
			return (ans);
		}
		count++;
	}
	return (ans);
}
