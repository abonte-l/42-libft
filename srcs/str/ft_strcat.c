/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-l <abonte-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 13:07:18 by abonte-l          #+#    #+#             */
/*   Updated: 2019/11/26 11:51:05 by abonte-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	if (!(dest[i]))
	{
		while (src[j])
		{
			dest[i] = src[j];
			j++;
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
