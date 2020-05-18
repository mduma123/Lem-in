/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 08:49:15 by omputle           #+#    #+#             */
/*   Updated: 2019/06/13 08:49:18 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	count;

	if (!f || !s)
		return (NULL);
	else
	{
		count = 0;
		while (s[count])
		{
			f(count, &s[count]);
			count++;
		}
	}
	return (0);
}
