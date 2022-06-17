/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_deprecated.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-l <abonte-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 15:16:38 by abonte-l          #+#    #+#             */
/*   Updated: 2022/06/17 18:35:23 by abonte-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		len_calc(int n)
{
	int len;

	len = 0;
	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	while (n < 0)
	{
		n = n * -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char			*ft_itoa_depracated(int n)
{
	int				len;
	char			*tab;
	unsigned int	num;

	len = len_calc(n);
	if (!(tab = malloc(sizeof(*tab) * (len + 1))))
		return (0);
	tab[len] = '\0';
	if (n == 0)
	{
		tab[0] = 48;
		return (tab);
	}
	if (n < 0)
		tab[0] = '-';
	num = (n < 0) ? (n * -1) : n;
	while (num)
	{
		tab[len - 1] = (num % 10) + 48;
		num = num / 10;
		len--;
	}
	return (tab);
}
