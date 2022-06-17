/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-l <abonte-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 12:04:20 by abonte-l          #+#    #+#             */
/*   Updated: 2019/12/03 14:16:11 by abonte-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*srcc;
	char	*destc;

	i = -1;
	srcc = (char *)src;
	destc = (char *)dest;
	if (srcc == NULL && destc == NULL)
		return (0);
	if (srcc < destc)
		while ((int)(--n) >= 0)
			*(destc + n) = *(srcc + n);
	else
		while (++i < n)
			*(destc + i) = *(srcc + i);
	return (dest);
}
