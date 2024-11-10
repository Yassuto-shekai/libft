/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 04:44:27 by yel-mota          #+#    #+#             */
/*   Updated: 2024/11/08 04:44:33 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}
/*int main ()
{
	t_list *lst;
	
	lst = NULL;
	ft_lstadd_back(&lst, ft_lstnew("hello"));
	ft_lstadd_back(&lst, ft_lstnew(" yassuto"));
	while(lst != NULL)
	{
		printf("%s", (char *)lst->content);
		lst = lst->next;
	}
	return (0);
}*/
