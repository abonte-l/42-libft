/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-l <abonte-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 18:21:10 by abonte-l          #+#    #+#             */
/*   Updated: 2019/11/28 14:03:42 by abonte-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *lst_cpy;
	t_list *new_elem;

	if (!f)
		return (NULL);
	lst_cpy = 0;
	while (lst)
	{
		if (!(new_elem = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&new_elem, del);
			return (NULL);
		}
		ft_lstadd_back(&lst_cpy, new_elem);
		lst = lst->next;
	}
	return (lst_cpy);
}
