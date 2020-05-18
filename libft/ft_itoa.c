/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 16:33:08 by omputle           #+#    #+#             */
/*   Updated: 2019/06/27 17:06:21 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		level(unsigned int nb)
{
	unsigned int	count;

	count = 0;
	while (nb >= 10)
	{
		nb = nb / 10;
		count++;
	}
	return (count + 1);
}

char			*ft_itoa(int n)
{
	char			*ans;
	unsigned int	nbr;
	unsigned int	count;
	unsigned int	len;

	if (n < 0)
		nbr = (unsigned int)(-1 * n);
	else
		nbr = (unsigned int)n;
	len = (unsigned int)level(nbr);
	if (!(ans = (char*)malloc(sizeof(char) * (len + 1 + (n < 0 ? 1 : 0)))))
		return (0);
	if (n < 0 && (ans[0] = '-'))
		len++;
	count = len - 1;
	while (nbr >= 10)
	{
		ans[count--] = (char)(nbr % 10 + 48);
		nbr = nbr / 10;
	}
	ans[count] = (char)(nbr % 10 + 48);
	ans[len] = '\0';
	return (ans);
}
