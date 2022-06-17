/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-l <abonte-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:25:34 by abonte-l          #+#    #+#             */
/*   Updated: 2019/11/13 16:12:32 by abonte-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!(*little))
		return ((char*)big);
	while (big[i] && i < len)
	{
		while (little[j] && big[i + j] &&
			(big[i + j] == little[j]) && (i + j) < len)
		{
			if (j == (ft_strlen(little) - 1))
				return ((char *)&big[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
