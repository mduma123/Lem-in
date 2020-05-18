/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 10:40:06 by omputle           #+#    #+#             */
/*   Updated: 2019/06/27 14:51:57 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	word_count(const char *str, char c)
{
	size_t	count;
	size_t	ans;

	ans = 0;
	count = 0;
	while (str[count] != '\0')
	{
		while (str[count] == c && str[count] != '\0')
			count++;
		if (str[count] != c && str[count] != '\0')
		{
			ans++;
			while (str[count] != c && str[count] != '\0')
				count++;
		}
	}
	return (ans);
}

static	size_t	letter_count(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (s[count] != '\0' && s[count] != c)
		count++;
	return (count);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	words;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	words = word_count((char *)s, c);
	if (!(str = (char **)malloc(sizeof(char *) * (words + 1))))
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != '\0' && s[i] != c)
		{
			str[j] = ft_strsub(s, i, letter_count((char*)&s[i], c));
			j++;
			i = i + letter_count((char*)&s[i], c);
		}
		while (s[i] == c && s[i] != '\0')
			i++;
	}
	str[j] = NULL;
	return (str);
}
