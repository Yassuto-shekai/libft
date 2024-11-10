/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:26:16 by yel-mota          #+#    #+#             */
/*   Updated: 2024/11/03 20:54:43 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t		size;
	char		*dest;

	size = sizeof(char) * (ft_strlen(s) + 1);
	dest = malloc(size);
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, s, size);
	return (dest);
}
