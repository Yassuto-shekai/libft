/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:03:17 by yel-mota          #+#    #+#             */
/*   Updated: 2024/11/07 13:31:45 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*t;

	t = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		t[i] = 0;
		i++;
	}
}
/*
 * int main() 
 * {
 * 	int arr[5];
 * 	int i;
 *
 * 	i = 0;
 *	ft_bzero(arr, sizeof(int) * 5);
 *	while (i < 5)
 *	{
 *		printf("%d", arr[i]);
 *		i++;
 *	}
 *	return (0);
 * }
 */
