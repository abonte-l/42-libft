/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-l <abonte-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 15:29:54 by abonte-l          #+#    #+#             */
/*   Updated: 2019/11/26 19:30:00 by abonte-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int nb_element;

	nb_element = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		nb_element++;
	}
	return (nb_element);
}
