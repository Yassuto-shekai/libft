/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:30:28 by yel-mota          #+#    #+#             */
/*   Updated: 2024/11/07 13:32:06 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;
	int	sine;

	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	res = 0;
	sine = 1;
	if ((nptr[i] == '-' || nptr[i] == '+')
		&& (nptr[i + 1] == '-' || nptr[i + 1] == '+'))
		return (res);
	if (nptr[i] == '-' || nptr[i] == '+')
		if (nptr[i++] == '-')
			sine *= -1;
	while (nptr[i] <= '9' && nptr[i] >= '0')
		res = res * 10 + nptr[i++] - 48;
	return (res * sine);
}

/*
 * int main()
 * {
 * 	printf("%d", ft_atoi(" -+1234a"));
 *	return (0);
 * }
 */
