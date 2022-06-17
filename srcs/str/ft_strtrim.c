/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-l <abonte-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 14:21:26 by marvin            #+#    #+#             */
/*   Updated: 2019/12/04 17:50:28 by abonte-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_start(char const *s1, char const *set)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (set[j])
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

static int		count_end(char const *s1, char const *set)
{
	size_t i;
	size_t j;

	i = ft_strlen((char *)s1) - 1;
	j = 0;
	while (set[j])
	{
		if (s1[i] == set[j])
		{
			i--;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*tab;
	size_t	i;
	size_t	k;
	size_t	len;

	if (!s1 || !set)
		return (0);
	i = count_start(s1, set);
	if (i == ft_strlen(s1))
	{
		if (!(tab = (char *)malloc(sizeof(char) * (i + 1))))
			return (0);
		ft_bzero(tab, i);
		return (tab);
	}
	k = count_end(s1, set);
	len = k - i + 1;
	tab = ft_substr(s1, i, len);
	return (tab);
}
