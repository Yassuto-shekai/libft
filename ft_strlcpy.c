/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:35:57 by yel-mota          #+#    #+#             */
/*   Updated: 2024/11/02 16:27:15 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	m;
	size_t	i;

	i = ft_strlen(src);
	m = 0;
	if (size != 0)
	{
		while (src[m] != '\0' && m < size - 1)
		{
			dest[m] = src[m];
			m++;
		}
		dest[m] = '\0';
	}
	return (i);
}
