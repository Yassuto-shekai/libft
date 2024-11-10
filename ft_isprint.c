/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-mota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 02:08:24 by yel-mota          #+#    #+#             */
/*   Updated: 2024/11/07 14:05:08 by yel-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c <= 126 && c >= 32)
		return (1);
	return (0);
}
/*int main() 
 * {
 * 	if (ft_isprint('c') == 1)
 * 		printf("oviousely");
 * 	else
 * 		printf("am i dont think so");
 *	return (0);
 * }
 */
