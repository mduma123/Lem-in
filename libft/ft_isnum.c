/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 15:20:40 by omputle           #+#    #+#             */
/*   Updated: 2019/09/14 08:35:43 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isnum(char *str)
{
	int	count;

	count = 0;
	if ((str[count] == '+' || str[count] == '-') && ft_strlen(str) > 1)
		count++;
	while (str[count] != '\0')
	{
		if (ft_isdigit(str[count]) == 0)
			return (0);
		count++;
	}
	return (1);
}
