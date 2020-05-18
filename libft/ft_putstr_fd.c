/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:52:40 by omputle           #+#    #+#             */
/*   Updated: 2019/06/11 16:04:13 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int count;

	if (!s)
		return ;
	count = 0;
	while (s[count] != '\0')
	{
		write(fd, &s[count], 1);
		count++;
	}
}
