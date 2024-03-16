/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:43:59 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/03/16 12:44:38 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*temp_dest;
	unsigned char	*temp_src;

	if (dest == (void *)0 && src == (void *)0)
	{
		return (dest);
	}
	while (n > 0)
	{
		*(temp_dest++) = *(temp_src++);
		n--;
	}
	return (dest);
}
