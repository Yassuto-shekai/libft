/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 04:44:47 by yel-mota          #+#    #+#             */
/*   Updated: 2024/11/08 04:44:50 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*int main ()
{
        t_list *lst;

        lst = NULL;
        ft_lstadd_front(&lst, ft_lstnew("yassuto"));
        ft_lstadd_front(&lst, ft_lstnew("hello "));
        while(lst != NULL)
        {
                printf("%s", (char *)lst->content);
                lst = lst->next;
        }
        return (0);
}*/
