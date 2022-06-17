/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-l <abonte-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:22:07 by abonte-l          #+#    #+#             */
/*   Updated: 2019/11/18 14:35:41 by abonte-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (src == NULL)
		return (1);
	while (src[j])
		j++;
	while ((i < (dstsize - 1)) && src[i])
	{
		if (dstsize)
		{
			dst[i] = src[i];
			i++;
		}
		else
			return (j);
	}
	dst[i] = '\0';
	return (j);
}
