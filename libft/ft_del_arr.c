/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_arr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 10:15:02 by omputle           #+#    #+#             */
/*   Updated: 2019/09/14 10:48:47 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_del_arr(char **arr)
{
	int		count;

	count = 0;
	while (arr[count] != NULL)
	{
		free(arr[count]);
		arr[count] = NULL;
		count++;
	}
	free(arr);
	arr = NULL;
}
