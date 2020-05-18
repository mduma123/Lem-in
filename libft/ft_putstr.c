/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 01:27:35 by omputle           #+#    #+#             */
/*   Updated: 2019/06/11 16:00:52 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *str)
{
	int	count;

	if (!str)
		return ;
	count = 0;
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}
}
