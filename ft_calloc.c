/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:50:52 by yel-mota          #+#    #+#             */
/*   Updated: 2024/11/07 13:37:51 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*all;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	all = malloc(size * nmemb);
	if (all == NULL)
		return (NULL);
	ft_bzero(all, size * nmemb);
	return ((void *)all);
}
/*  int main() 
  {
       int *i;
       int j;
 
       i = ft_calloc(5, sizeof(int));
       j = 0;
       while (j < 5)
       {
               printf("%d", i[j]);
               j++;
      }
      free (i);
      return (0);
 }
*/
