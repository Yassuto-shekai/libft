/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 04:54:39 by yel-mota          #+#    #+#             */
/*   Updated: 2024/11/08 05:05:24 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newnode;
	t_list	*tmp;

	tmp = lst;
	newlst = NULL;
	newnode = NULL;
	if (tmp == NULL || f == NULL || del == NULL)
		return (NULL);
	while (tmp != NULL)
	{
		newnode = ft_lstnew(tmp->content);
		if (newnode == NULL)
		{
			ft_lstclear(&newnode, del);
			return (NULL);
		}
		newnode->content = f(newnode->content);
		ft_lstadd_back(&newlst, newnode);
		tmp = tmp->next;
	}
	return (newlst);
}
