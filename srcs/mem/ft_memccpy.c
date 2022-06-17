/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-l <abonte-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 11:29:32 by abonte-l          #+#    #+#             */
/*   Updated: 2019/11/13 14:29:03 by abonte-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*dest;
	unsigned char	*srce;

	i = 0;
	dest = dst;
	srce = (unsigned char *)src;
	while (i < (unsigned int)n && (i == 0 || srce[i - 1] != (unsigned char)c))
	{
		dest[i] = srce[i];
		i++;
	}
	if (i > 0 && srce[i - 1] == c)
		return (dest + i);
	else
		return (NULL);
}
