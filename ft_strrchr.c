/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:15:04 by yel-mota          #+#    #+#             */
/*   Updated: 2024/11/03 20:18:45 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	int		i;

	i = ft_strlen(str);
	while (str[i] != (char)chr)
	{
		if (i == 0)
			return (NULL);
		i--;
	}
	return ((char *)str + i);
}
