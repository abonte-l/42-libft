/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-l <abonte-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 15:27:16 by abonte-l          #+#    #+#             */
/*   Updated: 2019/11/28 19:15:14 by abonte-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	unsigned int	len;

	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	i = 0;
	if (!(str = malloc(sizeof(*str) * (len + 1))))
		return (0);
	while (s[i])
	{
		str[i] = ((*f)(i, s[i]));
		i++;
	}
	str[i] = '\0';
	return (str);
}
