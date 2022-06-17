/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-l <abonte-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 20:08:38 by abonte-l          #+#    #+#             */
/*   Updated: 2019/11/13 16:48:36 by abonte-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*t1;
	unsigned const char	*t2;
	int					i;

	i = 0;
	t1 = (unsigned const char *)s1;
	t2 = (unsigned const char *)s2;
	while (n)
	{
		if (*t1 != *t2)
			return (*t1 - *t2);
		t1++;
		t2++;
		n--;
	}
	return (0);
}
