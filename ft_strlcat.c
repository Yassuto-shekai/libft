/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:40:46 by yel-mota          #+#    #+#             */
/*   Updated: 2024/11/03 20:56:26 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	m;
	size_t	lendest;
	size_t	lensrc;

	lensrc = ft_strlen(src);
	if (size == 0)
		return (lensrc);
	lendest = ft_strlen(dest);
	if (lendest >= size)
		return (lensrc + size);
	m = 0;
	while (src[m] != '\0' && m < size - lendest - 1)
	{
		dest[lendest + m] = src[m];
		m++;
	}
	dest[lendest + m] = '\0';
	return (lensrc + lendest);
}
