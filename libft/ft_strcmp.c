/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 11:08:11 by omputle           #+#    #+#             */
/*   Updated: 2019/06/07 10:36:11 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int	count;
	int	ans;

	count = 0;
	ans = 0;
	while (s1[count] != '\0' || s2[count] != '\0')
	{
		if (s1[count] != s2[count])
		{
			ans = (unsigned char)s1[count] - (unsigned char)s2[count];
			break ;
		}
		count++;
	}
	return (ans);
}
