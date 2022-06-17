/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-l <abonte-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 16:53:55 by abonte-l          #+#    #+#             */
/*   Updated: 2019/11/29 15:57:06 by abonte-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int caract;

	if (s == NULL)
		return ;
	caract = 0;
	while (s[caract])
	{
		write(fd, &s[caract], 1);
		caract++;
	}
	write(fd, "\n", 1);
}
