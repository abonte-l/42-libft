/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-l <abonte-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 10:07:01 by abonte-l          #+#    #+#             */
/*   Updated: 2019/11/27 16:55:31 by abonte-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	recurence(t_list *element, void (*del)(void *))
{
	if (element)
	{
		recurence(element->next, del);
		ft_lstdelone(element, del);
	}
}

void		ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (lst && del)
		recurence(*lst, del);
	*lst = NULL;
}
