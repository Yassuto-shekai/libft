/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:36:07 by yel-mota          #+#    #+#             */
/*   Updated: 2024/11/03 23:14:51 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strchar(const char *set, const char c)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
		if (set[i++] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	while (ft_strchar(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	if (j == i)
		return (ft_substr("", 0, 1));
	while (j > i && ft_strchar(set, s1[j - 1]))
		j--;
	return (ft_substr(s1, i, j - i));
}
