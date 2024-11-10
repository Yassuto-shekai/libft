/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:29:55 by yel-mota          #+#    #+#             */
/*   Updated: 2024/11/03 20:07:36 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*psrc;
	unsigned char		*pdest;

	if ((dest == NULL && src == NULL) || n == 0)
		return (dest);
	psrc = (const unsigned char *)src;
	pdest = (unsigned char *)dest;
	i = 0;
	if (psrc > pdest || pdest >= psrc + n)
	{
		while (n > i)
		{
			pdest[i] = psrc[i];
			i++;
		}
	}
	else
	{
		while (n-- > i)
			pdest[n] = psrc[n];
	}
	return ((void *)pdest);
}
